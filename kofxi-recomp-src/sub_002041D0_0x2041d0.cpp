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

// Function: sub_002041D0
// Address: 0x2041d0 - 0x204440
void sub_002041D0_0x2041d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002041D0_0x2041d0");
#endif

    switch (ctx->pc) {
        case 0x204228u: goto label_204228;
        case 0x204298u: goto label_204298;
        case 0x20436cu: goto label_20436c;
        case 0x2043dcu: goto label_2043dc;
        default: break;
    }

    ctx->pc = 0x2041d0u;

    // 0x2041d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2041d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2041d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2041d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2041d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2041d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2041dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2041dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2041e0: 0x10830076  beq         $a0, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x2041E0u;
    {
        const bool branch_taken_0x2041e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2041E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041E0u;
        // 0x2041e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041e0) {
            ctx->pc = 0x2043BCu;
            goto label_2043bc;
        }
    }
    ctx->pc = 0x2041E8u;
    // 0x2041e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2041e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2041ec: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2041ECu;
    {
        const bool branch_taken_0x2041ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2041ec) {
            ctx->pc = 0x204354u;
            goto label_204354;
        }
    }
    ctx->pc = 0x2041F4u;
    // 0x2041f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2041f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2041f8: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2041F8u;
    {
        const bool branch_taken_0x2041f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2041f8) {
            ctx->pc = 0x204278u;
            goto label_204278;
        }
    }
    ctx->pc = 0x204200u;
    // 0x204200: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204200u;
    {
        const bool branch_taken_0x204200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x204200) {
            ctx->pc = 0x204210u;
            goto label_204210;
        }
    }
    ctx->pc = 0x204208u;
    // 0x204208: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x204208u;
    {
        const bool branch_taken_0x204208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204208u;
        // 0x20420c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204208) {
            ctx->pc = 0x204424u;
            goto label_204424;
        }
    }
    ctx->pc = 0x204210u;
label_204210:
    // 0x204210: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x204210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x204214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204218: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x204218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x20421c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x20421cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x204220: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x204220u;
    SET_GPR_U32(ctx, 31, 0x204228u);
    ctx->pc = 0x204224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204220u;
    // 0x204224: 0x244404f1  addiu       $a0, $v0, 0x4F1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1265));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x204220u, 0x204228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204228u;
label_204228:
    // 0x204228: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x204228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20422c: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x20422cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x204230: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x204230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x204234: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x204234u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204238: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x204238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x20423c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x20423cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204240: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x204240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x204244: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x204244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x204248: 0xa06004f0  sb          $zero, 0x4F0($v1)
    ctx->pc = 0x204248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1264), (uint8_t)GPR_U32(ctx, 0));
    // 0x20424c: 0x8cc99bf8  lw          $t1, -0x6408($a2)
    ctx->pc = 0x20424cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294941688)));
    // 0x204250: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x204250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204254: 0xa12a04f1  sb          $t2, 0x4F1($t1)
    ctx->pc = 0x204254u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1265), (uint8_t)GPR_U32(ctx, 10));
    // 0x204258: 0x8ca59bf8  lw          $a1, -0x6408($a1)
    ctx->pc = 0x204258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x20425c: 0x93a6003c  lbu         $a2, 0x3C($sp)
    ctx->pc = 0x20425cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x204260: 0xa0a804f2  sb          $t0, 0x4F2($a1)
    ctx->pc = 0x204260u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1266), (uint8_t)GPR_U32(ctx, 8));
    // 0x204264: 0x8c849bf8  lw          $a0, -0x6408($a0)
    ctx->pc = 0x204264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x204268: 0xa08704f8  sb          $a3, 0x4F8($a0)
    ctx->pc = 0x204268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1272), (uint8_t)GPR_U32(ctx, 7));
    // 0x20426c: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x20426cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x204270: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x204270u;
    {
        const bool branch_taken_0x204270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204270u;
        // 0x204274: 0xa06604f6  sb          $a2, 0x4F6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1270), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204270) {
            ctx->pc = 0x204420u;
            goto label_204420;
        }
    }
    ctx->pc = 0x204278u;
label_204278:
    // 0x204278: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x204278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20427c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20427cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204280: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x204280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x204284: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x204284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x204288: 0x905104f5  lbu         $s1, 0x4F5($v0)
    ctx->pc = 0x204288u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1269)));
    // 0x20428c: 0x905004f6  lbu         $s0, 0x4F6($v0)
    ctx->pc = 0x20428cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1270)));
    // 0x204290: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x204290u;
    SET_GPR_U32(ctx, 31, 0x204298u);
    ctx->pc = 0x204294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204290u;
    // 0x204294: 0x244404f1  addiu       $a0, $v0, 0x4F1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1265));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x204290u, 0x204298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204298u;
label_204298:
    // 0x204298: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x204298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20429c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20429cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2042a0: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x2042a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2042a4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2042a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2042a8: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2042a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2042ac: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2042acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2042b0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2042b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2042b4: 0xa08804f1  sb          $t0, 0x4F1($a0)
    ctx->pc = 0x2042b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1265), (uint8_t)GPR_U32(ctx, 8));
    // 0x2042b8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2042b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2042bc: 0x8c689bf8  lw          $t0, -0x6408($v1)
    ctx->pc = 0x2042bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2042c0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2042c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x2042c4: 0xa10904f2  sb          $t1, 0x4F2($t0)
    ctx->pc = 0x2042c4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1266), (uint8_t)GPR_U32(ctx, 9));
    // 0x2042c8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2042c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2042cc: 0x8ca59bf8  lw          $a1, -0x6408($a1)
    ctx->pc = 0x2042ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x2042d0: 0xa0a704f3  sb          $a3, 0x4F3($a1)
    ctx->pc = 0x2042d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1267), (uint8_t)GPR_U32(ctx, 7));
    // 0x2042d4: 0x8c849bf8  lw          $a0, -0x6408($a0)
    ctx->pc = 0x2042d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x2042d8: 0xa08604f4  sb          $a2, 0x4F4($a0)
    ctx->pc = 0x2042d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1268), (uint8_t)GPR_U32(ctx, 6));
    // 0x2042dc: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x2042dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2042e0: 0x908304f0  lbu         $v1, 0x4F0($a0)
    ctx->pc = 0x2042e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x2042e4: 0x54660002  bnel        $v1, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2042E4u;
    {
        const bool branch_taken_0x2042e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2042e4) {
            ctx->pc = 0x2042E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2042E4u;
            // 0x2042e8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2042F0u;
            goto label_2042f0;
        }
    }
    ctx->pc = 0x2042ECu;
    // 0x2042ec: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2042ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2042f0:
    // 0x2042f0: 0xa08304f5  sb          $v1, 0x4F5($a0)
    ctx->pc = 0x2042f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1269), (uint8_t)GPR_U32(ctx, 3));
    // 0x2042f4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2042f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2042f8: 0x8c659bf8  lw          $a1, -0x6408($v1)
    ctx->pc = 0x2042f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2042fc: 0x90a404f0  lbu         $a0, 0x4F0($a1)
    ctx->pc = 0x2042fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1264)));
    // 0x204300: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x204300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204304: 0x54830002  bnel        $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x204304u;
    {
        const bool branch_taken_0x204304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x204304) {
            ctx->pc = 0x204308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204304u;
            // 0x204308: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204310u;
            goto label_204310;
        }
    }
    ctx->pc = 0x20430Cu;
    // 0x20430c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x20430cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_204310:
    // 0x204310: 0xa0a304f6  sb          $v1, 0x4F6($a1)
    ctx->pc = 0x204310u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1270), (uint8_t)GPR_U32(ctx, 3));
    // 0x204314: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x204314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204318: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x204318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x20431c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x20431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x204320: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x204320u;
    {
        const bool branch_taken_0x204320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204320) {
            ctx->pc = 0x204324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204320u;
            // 0x204324: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20432Cu;
            goto label_20432c;
        }
    }
    ctx->pc = 0x204328u;
    // 0x204328: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x204328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20432c:
    // 0x20432c: 0xa08304f7  sb          $v1, 0x4F7($a0)
    ctx->pc = 0x20432cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1271), (uint8_t)GPR_U32(ctx, 3));
    // 0x204330: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x204330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x204334: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x204334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204338: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x204338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20433c: 0x8c659bf8  lw          $a1, -0x6408($v1)
    ctx->pc = 0x20433cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x204340: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x204340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204344: 0xa0a604f8  sb          $a2, 0x4F8($a1)
    ctx->pc = 0x204344u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1272), (uint8_t)GPR_U32(ctx, 6));
    // 0x204348: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x204348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x20434c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x20434Cu;
    {
        const bool branch_taken_0x20434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20434Cu;
        // 0x204350: 0xa06404f0  sb          $a0, 0x4F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1264), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20434c) {
            ctx->pc = 0x204420u;
            goto label_204420;
        }
    }
    ctx->pc = 0x204354u;
label_204354:
    // 0x204354: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x204354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x204358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20435c: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x20435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x204360: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x204360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x204364: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x204364u;
    SET_GPR_U32(ctx, 31, 0x20436Cu);
    ctx->pc = 0x204368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204364u;
    // 0x204368: 0x244404f1  addiu       $a0, $v0, 0x4F1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1265));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x204364u, 0x20436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20436Cu;
label_20436c:
    // 0x20436c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20436cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204370: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x204370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204374: 0x8c669bf8  lw          $a2, -0x6408($v1)
    ctx->pc = 0x204374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x204378: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x204378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20437c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x20437cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x204380: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x204380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x204384: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x204384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x204388: 0xa0ca04f0  sb          $t2, 0x4F0($a2)
    ctx->pc = 0x204388u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1264), (uint8_t)GPR_U32(ctx, 10));
    // 0x20438c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20438cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204390: 0x8c689bf8  lw          $t0, -0x6408($v1)
    ctx->pc = 0x204390u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x204394: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x204394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x204398: 0xa10904f1  sb          $t1, 0x4F1($t0)
    ctx->pc = 0x204398u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1265), (uint8_t)GPR_U32(ctx, 9));
    // 0x20439c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20439cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2043a0: 0x8ca59bf8  lw          $a1, -0x6408($a1)
    ctx->pc = 0x2043a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x2043a4: 0xa0aa04f2  sb          $t2, 0x4F2($a1)
    ctx->pc = 0x2043a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1266), (uint8_t)GPR_U32(ctx, 10));
    // 0x2043a8: 0x8c849bf8  lw          $a0, -0x6408($a0)
    ctx->pc = 0x2043a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x2043ac: 0xa08704f8  sb          $a3, 0x4F8($a0)
    ctx->pc = 0x2043acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1272), (uint8_t)GPR_U32(ctx, 7));
    // 0x2043b0: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2043b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2043b4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2043B4u;
    {
        const bool branch_taken_0x2043b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043B4u;
        // 0x2043b8: 0xa06604f5  sb          $a2, 0x4F5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1269), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043b4) {
            ctx->pc = 0x204420u;
            goto label_204420;
        }
    }
    ctx->pc = 0x2043BCu;
label_2043bc:
    // 0x2043bc: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2043bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2043c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2043c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043c4: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x2043c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2043c8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2043c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2043cc: 0x905104f5  lbu         $s1, 0x4F5($v0)
    ctx->pc = 0x2043ccu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1269)));
    // 0x2043d0: 0x905004f6  lbu         $s0, 0x4F6($v0)
    ctx->pc = 0x2043d0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1270)));
    // 0x2043d4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2043D4u;
    SET_GPR_U32(ctx, 31, 0x2043DCu);
    ctx->pc = 0x2043D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2043D4u;
    // 0x2043d8: 0x244404f1  addiu       $a0, $v0, 0x4F1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1265));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2043D4u, 0x2043DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043DCu;
label_2043dc:
    // 0x2043dc: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2043dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2043e0: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2043e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2043e4: 0x8c689bf8  lw          $t0, -0x6408($v1)
    ctx->pc = 0x2043e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2043e8: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x2043e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x2043ec: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2043ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2043f0: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2043f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2043f4: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2043f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x2043f8: 0xa10904f0  sb          $t1, 0x4F0($t0)
    ctx->pc = 0x2043f8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1264), (uint8_t)GPR_U32(ctx, 9));
    // 0x2043fc: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2043fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204400: 0x8cc69bf8  lw          $a2, -0x6408($a2)
    ctx->pc = 0x204400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294941688)));
    // 0x204404: 0xa0c704f3  sb          $a3, 0x4F3($a2)
    ctx->pc = 0x204404u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1267), (uint8_t)GPR_U32(ctx, 7));
    // 0x204408: 0x8ca59bf8  lw          $a1, -0x6408($a1)
    ctx->pc = 0x204408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x20440c: 0xa0a904f4  sb          $t1, 0x4F4($a1)
    ctx->pc = 0x20440cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1268), (uint8_t)GPR_U32(ctx, 9));
    // 0x204410: 0x8c849bf8  lw          $a0, -0x6408($a0)
    ctx->pc = 0x204410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x204414: 0xa09104f5  sb          $s1, 0x4F5($a0)
    ctx->pc = 0x204414u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1269), (uint8_t)GPR_U32(ctx, 17));
    // 0x204418: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x204418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x20441c: 0xa07004f6  sb          $s0, 0x4F6($v1)
    ctx->pc = 0x20441cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1270), (uint8_t)GPR_U32(ctx, 16));
label_204420:
    // 0x204420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x204420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_204424:
    // 0x204424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20442c: 0x3e00008  jr          $ra
    ctx->pc = 0x20442Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20442Cu;
        // 0x204430: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20442Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204434u;
    // 0x204434: 0x0  nop
    ctx->pc = 0x204434u;
    // NOP
    // 0x204438: 0x0  nop
    ctx->pc = 0x204438u;
    // NOP
    // 0x20443c: 0x0  nop
    ctx->pc = 0x20443cu;
    // NOP
    if (ctx->pc == 0x20443cu) { ctx->pc = 0x204440u; }
}
