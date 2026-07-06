#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D2E0
// Address: 0x17d2e0 - 0x17d790
void sub_0017D2E0_0x17d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D2E0_0x17d2e0");
#endif

    switch (ctx->pc) {
        case 0x17d304u: goto label_17d304;
        case 0x17d314u: goto label_17d314;
        case 0x17d324u: goto label_17d324;
        default: break;
    }

    ctx->pc = 0x17d2e0u;

    // 0x17d2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17d2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17d2e4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17d2e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17d2ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17d2f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d2f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d2f8: 0x9063daa0  lbu         $v1, -0x2560($v1)
    ctx->pc = 0x17d2f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x17d2fc: 0x18600074  blez        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x17D2FCu;
    {
        const bool branch_taken_0x17d2fc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2FCu;
        // 0x17d300: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2fc) {
            ctx->pc = 0x17D4D0u;
            goto label_17d4d0;
        }
    }
    ctx->pc = 0x17D304u;
label_17d304:
    // 0x17d304: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x17d304u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x17d308: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17d308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d30c: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x17D30Cu;
    SET_GPR_U32(ctx, 31, 0x17D314u);
    ctx->pc = 0x17D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D30Cu;
    // 0x17d310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x17D30Cu, 0x17D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D314u;
label_17d314:
    // 0x17d314: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x17d314u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d31c: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x17D31Cu;
    SET_GPR_U32(ctx, 31, 0x17D324u);
    ctx->pc = 0x17D320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D31Cu;
    // 0x17d320: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x17D31Cu, 0x17D324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D324u;
label_17d324:
    // 0x17d324: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x17d324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d328: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x17d328u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d32c: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x17d32cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17d330: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17d330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17d334: 0x2463b6b0  addiu       $v1, $v1, -0x4950
    ctx->pc = 0x17d334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948528));
    // 0x17d338: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x17d338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17d33c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17d340: 0x2463b6c0  addiu       $v1, $v1, -0x4940
    ctx->pc = 0x17d340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948544));
    // 0x17d344: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x17d344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17d348: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x17d348u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17d34c: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D34Cu;
    {
        const bool branch_taken_0x17d34c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D34Cu;
        // 0x17d350: 0xa4a00000  sh          $zero, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d34c) {
            ctx->pc = 0x17D360u;
            goto label_17d360;
        }
    }
    ctx->pc = 0x17D354u;
    // 0x17d354: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17d354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17d358: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x17d358u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17d35c: 0x0  nop
    ctx->pc = 0x17d35cu;
    // NOP
label_17d360:
    // 0x17d360: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x17d360u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17d364: 0x1c600016  bgtz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x17D364u;
    {
        const bool branch_taken_0x17d364 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x17d364) {
            ctx->pc = 0x17D3C0u;
            goto label_17d3c0;
        }
    }
    ctx->pc = 0x17D36Cu;
    // 0x17d36c: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x17d36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x17d370: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x17d370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17d374: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x17D374u;
    {
        const bool branch_taken_0x17d374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d374) {
            ctx->pc = 0x17D3C0u;
            goto label_17d3c0;
        }
    }
    ctx->pc = 0x17D37Cu;
    // 0x17d37c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x17d37cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17d380: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17d380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17d384: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17d384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17d388: 0x24843b28  addiu       $a0, $a0, 0x3B28
    ctx->pc = 0x17d388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15144));
    // 0x17d38c: 0x2463b6a8  addiu       $v1, $v1, -0x4958
    ctx->pc = 0x17d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948520));
    // 0x17d390: 0x704821  addu        $t1, $v1, $s0
    ctx->pc = 0x17d390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17d394: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x17d394u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d398: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17d398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17d39c: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x17d39cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17d3a0: 0x2463b6b8  addiu       $v1, $v1, -0x4948
    ctx->pc = 0x17d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948536));
    // 0x17d3a4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x17d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17d3a8: 0x31290030  andi        $t1, $t1, 0x30
    ctx->pc = 0x17d3a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)48);
    // 0x17d3ac: 0x94903  sra         $t1, $t1, 4
    ctx->pc = 0x17d3acu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 4));
    // 0x17d3b0: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x17d3b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x17d3b4: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x17d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x17d3b8: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x17d3b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d3bc: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x17d3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_17d3c0:
    // 0x17d3c0: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x17d3c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x17d3c4: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x17d3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x17d3c8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x17d3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17d3cc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17D3CCu;
    {
        const bool branch_taken_0x17d3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d3cc) {
            ctx->pc = 0x17D408u;
            goto label_17d408;
        }
    }
    ctx->pc = 0x17D3D4u;
    // 0x17d3d4: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x17d3d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x17d3d8: 0x2529b6a8  addiu       $t1, $t1, -0x4958
    ctx->pc = 0x17d3d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294948520));
    // 0x17d3dc: 0x1305021  addu        $t2, $t1, $s0
    ctx->pc = 0x17d3dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x17d3e0: 0x91490000  lbu         $t1, 0x0($t2)
    ctx->pc = 0x17d3e0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17d3e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17d3e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17d3e8: 0xa1490000  sb          $t1, 0x0($t2)
    ctx->pc = 0x17d3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x17d3ec: 0x91490000  lbu         $t1, 0x0($t2)
    ctx->pc = 0x17d3ecu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17d3f0: 0x29210040  slti        $at, $t1, 0x40
    ctx->pc = 0x17d3f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x17d3f4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D3F4u;
    {
        const bool branch_taken_0x17d3f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d3f4) {
            ctx->pc = 0x17D418u;
            goto label_17d418;
        }
    }
    ctx->pc = 0x17D3FCu;
    // 0x17d3fc: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x17d3fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x17d400: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17D400u;
    {
        const bool branch_taken_0x17d400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D400u;
        // 0x17d404: 0xa1490000  sb          $t1, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d400) {
            ctx->pc = 0x17D418u;
            goto label_17d418;
        }
    }
    ctx->pc = 0x17D408u;
label_17d408:
    // 0x17d408: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x17d408u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x17d40c: 0x2529b6a8  addiu       $t1, $t1, -0x4958
    ctx->pc = 0x17d40cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294948520));
    // 0x17d410: 0x1305021  addu        $t2, $t1, $s0
    ctx->pc = 0x17d410u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x17d414: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x17d414u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
label_17d418:
    // 0x17d418: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x17d418u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x17d41c: 0x2529b6b8  addiu       $t1, $t1, -0x4948
    ctx->pc = 0x17d41cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294948536));
    // 0x17d420: 0x1266821  addu        $t5, $t1, $a2
    ctx->pc = 0x17d420u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x17d424: 0x85a90000  lh          $t1, 0x0($t5)
    ctx->pc = 0x17d424u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x17d428: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x17d428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x17d42c: 0xa5a90000  sh          $t1, 0x0($t5)
    ctx->pc = 0x17d42cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x17d430: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x17d430u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x17d434: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x17d434u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x17d438: 0x1d200011  bgtz        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17D438u;
    {
        const bool branch_taken_0x17d438 = (GPR_S32(ctx, 9) > 0);
        if (branch_taken_0x17d438) {
            ctx->pc = 0x17D480u;
            goto label_17d480;
        }
    }
    ctx->pc = 0x17D440u;
    // 0x17d440: 0x914c0000  lbu         $t4, 0x0($t2)
    ctx->pc = 0x17d440u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17d444: 0x3c0b0036  lui         $t3, 0x36
    ctx->pc = 0x17d444u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)54 << 16));
    // 0x17d448: 0x94a90000  lhu         $t1, 0x0($a1)
    ctx->pc = 0x17d448u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17d44c: 0x256b3b28  addiu       $t3, $t3, 0x3B28
    ctx->pc = 0x17d44cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 15144));
    // 0x17d450: 0x308a000f  andi        $t2, $a0, 0xF
    ctx->pc = 0x17d450u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x17d454: 0x318c0030  andi        $t4, $t4, 0x30
    ctx->pc = 0x17d454u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)48);
    // 0x17d458: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x17d458u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x17d45c: 0xc5103  sra         $t2, $t4, 4
    ctx->pc = 0x17d45cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 12), 4));
    // 0x17d460: 0xa4a90000  sh          $t1, 0x0($a1)
    ctx->pc = 0x17d460u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x17d464: 0xa2840  sll         $a1, $t2, 1
    ctx->pc = 0x17d464u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x17d468: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x17d468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x17d46c: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x17d46cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17d470: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D470u;
    {
        const bool branch_taken_0x17d470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D470u;
        // 0x17d474: 0xa5a50000  sh          $a1, 0x0($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d470) {
            ctx->pc = 0x17D480u;
            goto label_17d480;
        }
    }
    ctx->pc = 0x17D478u;
    // 0x17d478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17d478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d47c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x17d47cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
label_17d480:
    // 0x17d480: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x17d480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x17d484: 0x30650f00  andi        $a1, $v1, 0xF00
    ctx->pc = 0x17d484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x17d488: 0x30833000  andi        $v1, $a0, 0x3000
    ctx->pc = 0x17d488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12288);
    // 0x17d48c: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x17d48cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x17d490: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17d490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17d494: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x17d494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x17d498: 0x2484b6b0  addiu       $a0, $a0, -0x4950
    ctx->pc = 0x17d498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
    // 0x17d49c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x17d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17d4a0: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x17d4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x17d4a4: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x17d4a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17d4a8: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x17d4a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17d4ac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17d4b0: 0x9063daa0  lbu         $v1, -0x2560($v1)
    ctx->pc = 0x17d4b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x17d4b4: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x17d4b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x17d4b8: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x17d4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x17d4bc: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x17d4bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17d4c0: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x17d4c0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17d4c4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17d4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17d4c8: 0x1460ff8e  bnez        $v1, . + 4 + (-0x72 << 2)
    ctx->pc = 0x17D4C8u;
    {
        const bool branch_taken_0x17d4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4C8u;
        // 0x17d4cc: 0xa4c40000  sh          $a0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4c8) {
            ctx->pc = 0x17D304u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d304;
        }
    }
    ctx->pc = 0x17D4D0u;
label_17d4d0:
    // 0x17d4d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17d4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d4d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d4d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d4d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d4dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x17D4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4E0u;
        // 0x17d4e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D4E8u;
    // 0x17d4e8: 0x0  nop
    ctx->pc = 0x17d4e8u;
    // NOP
    // 0x17d4ec: 0x0  nop
    ctx->pc = 0x17d4ecu;
    // NOP
    // 0x17d4f0: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x17d4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d4f4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x17d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x17d4f8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x17d4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x17d4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17D4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4FCu;
        // 0x17d500: 0xac830494  sw          $v1, 0x494($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D504u;
    // 0x17d504: 0x0  nop
    ctx->pc = 0x17d504u;
    // NOP
    // 0x17d508: 0x0  nop
    ctx->pc = 0x17d508u;
    // NOP
    // 0x17d50c: 0x0  nop
    ctx->pc = 0x17d50cu;
    // NOP
    // 0x17d510: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x17d510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d514: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x17d514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x17d518: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17d518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17d51c: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x17d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x17d520: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17d520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17d524: 0xac830494  sw          $v1, 0x494($a0)
    ctx->pc = 0x17d524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
    // 0x17d528: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x17d528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x17d52c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d530: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x17d530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x17d534: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D534u;
    ctx->pc = 0x17D538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D534u;
    // 0x17d538: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D53Cu;
    // 0x17d53c: 0x0  nop
    ctx->pc = 0x17d53cu;
    // NOP
    // 0x17d540: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x17d540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d544: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x17d544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x17d548: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17d548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17d54c: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x17d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x17d550: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17d550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17d554: 0xac830494  sw          $v1, 0x494($a0)
    ctx->pc = 0x17d554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
    // 0x17d558: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x17d558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x17d55c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d560: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x17d560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x17d564: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D564u;
    ctx->pc = 0x17D568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D564u;
    // 0x17d568: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D56Cu;
    // 0x17d56c: 0x0  nop
    ctx->pc = 0x17d56cu;
    // NOP
    // 0x17d570: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x17d570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d574: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x17d574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x17d578: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17d578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17d57c: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x17d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x17d580: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17d580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17d584: 0xac830494  sw          $v1, 0x494($a0)
    ctx->pc = 0x17d584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
    // 0x17d588: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x17d588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x17d58c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d590: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x17d590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x17d594: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D594u;
    ctx->pc = 0x17D598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D594u;
    // 0x17d598: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D59Cu;
    // 0x17d59c: 0x0  nop
    ctx->pc = 0x17d59cu;
    // NOP
    // 0x17d5a0: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x17d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d5a4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x17d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x17d5a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17d5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17d5ac: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x17d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x17d5b0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17d5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17d5b4: 0xac830494  sw          $v1, 0x494($a0)
    ctx->pc = 0x17d5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
    // 0x17d5b8: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x17d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x17d5bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d5c0: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x17d5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x17d5c4: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D5C4u;
    ctx->pc = 0x17D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D5C4u;
    // 0x17d5c8: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D5CCu;
    // 0x17d5cc: 0x0  nop
    ctx->pc = 0x17d5ccu;
    // NOP
    // 0x17d5d0: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x17d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d5d4: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x17d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x17d5d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17d5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17d5dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d5e0: 0xac820494  sw          $v0, 0x494($a0)
    ctx->pc = 0x17d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 2));
    // 0x17d5e4: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D5E4u;
    ctx->pc = 0x17D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D5E4u;
    // 0x17d5e8: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D5ECu;
    // 0x17d5ec: 0x0  nop
    ctx->pc = 0x17d5ecu;
    // NOP
    // 0x17d5f0: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x17d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d5f4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x17d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x17d5f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17d5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17d5fc: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x17d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x17d600: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17d600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17d604: 0xac830494  sw          $v1, 0x494($a0)
    ctx->pc = 0x17d604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
    // 0x17d608: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x17d608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x17d60c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d610: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x17d610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x17d614: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D614u;
    ctx->pc = 0x17D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D614u;
    // 0x17d618: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D61Cu;
    // 0x17d61c: 0x0  nop
    ctx->pc = 0x17d61cu;
    // NOP
    // 0x17d620: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x17d620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d624: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x17d624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x17d628: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17d628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17d62c: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x17d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x17d630: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17d630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17d634: 0xac830494  sw          $v1, 0x494($a0)
    ctx->pc = 0x17d634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
    // 0x17d638: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x17d638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x17d63c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d640: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x17d640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x17d644: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D644u;
    ctx->pc = 0x17D648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D644u;
    // 0x17d648: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D64Cu;
    // 0x17d64c: 0x0  nop
    ctx->pc = 0x17d64cu;
    // NOP
    // 0x17d650: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x17d650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d654: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x17d654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x17d658: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17d658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17d65c: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x17d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x17d660: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17d660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17d664: 0xac830494  sw          $v1, 0x494($a0)
    ctx->pc = 0x17d664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
    // 0x17d668: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x17d668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x17d66c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d670: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x17d670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x17d674: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D674u;
    ctx->pc = 0x17D678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D674u;
    // 0x17d678: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D67Cu;
    // 0x17d67c: 0x0  nop
    ctx->pc = 0x17d67cu;
    // NOP
    // 0x17d680: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x17d680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d684: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x17d684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x17d688: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17d688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17d68c: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x17d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x17d690: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17d690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17d694: 0xac830494  sw          $v1, 0x494($a0)
    ctx->pc = 0x17d694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
    // 0x17d698: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x17d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x17d69c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d6a0: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x17d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x17d6a4: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D6A4u;
    ctx->pc = 0x17D6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D6A4u;
    // 0x17d6a8: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D6ACu;
    // 0x17d6ac: 0x0  nop
    ctx->pc = 0x17d6acu;
    // NOP
    // 0x17d6b0: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x17d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d6b4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x17d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x17d6b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17d6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17d6bc: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x17d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x17d6c0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17d6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17d6c4: 0xac830494  sw          $v1, 0x494($a0)
    ctx->pc = 0x17d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
    // 0x17d6c8: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x17d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x17d6cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d6d0: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x17d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x17d6d4: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D6D4u;
    ctx->pc = 0x17D6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D6D4u;
    // 0x17d6d8: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D6DCu;
    // 0x17d6dc: 0x0  nop
    ctx->pc = 0x17d6dcu;
    // NOP
    // 0x17d6e0: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x17d6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d6e4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x17d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x17d6e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17d6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17d6ec: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x17d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x17d6f0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17d6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17d6f4: 0xac830494  sw          $v1, 0x494($a0)
    ctx->pc = 0x17d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
    // 0x17d6f8: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x17d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x17d6fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d700: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x17d700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x17d704: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D704u;
    ctx->pc = 0x17D708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D704u;
    // 0x17d708: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D70Cu;
    // 0x17d70c: 0x0  nop
    ctx->pc = 0x17d70cu;
    // NOP
    // 0x17d710: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x17d710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d714: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x17d714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x17d718: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17d718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17d71c: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x17d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x17d720: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17d720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17d724: 0xac830494  sw          $v1, 0x494($a0)
    ctx->pc = 0x17d724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
    // 0x17d728: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x17d728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x17d72c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d730: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x17d730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x17d734: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D734u;
    ctx->pc = 0x17D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D734u;
    // 0x17d738: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D73Cu;
    // 0x17d73c: 0x0  nop
    ctx->pc = 0x17d73cu;
    // NOP
    // 0x17d740: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x17d740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d744: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x17d744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x17d748: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17d748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17d74c: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x17d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x17d750: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17d750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17d754: 0xac830494  sw          $v1, 0x494($a0)
    ctx->pc = 0x17d754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
    // 0x17d758: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x17d758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x17d75c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d760: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x17d760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x17d764: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D764u;
    ctx->pc = 0x17D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D764u;
    // 0x17d768: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D76Cu;
    // 0x17d76c: 0x0  nop
    ctx->pc = 0x17d76cu;
    // NOP
    // 0x17d770: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x17d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x17d774: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x17d774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x17d778: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17d778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17d77c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17d77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d780: 0xac820494  sw          $v0, 0x494($a0)
    ctx->pc = 0x17d780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 2));
    // 0x17d784: 0x805866c  j           func_1619B0
    ctx->pc = 0x17D784u;
    ctx->pc = 0x17D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D784u;
    // 0x17d788: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    sub_001619B0_0x1619b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D78Cu;
    // 0x17d78c: 0x0  nop
    ctx->pc = 0x17d78cu;
    // NOP
    if (ctx->pc == 0x17d78cu) { ctx->pc = 0x17d790u; }
}
