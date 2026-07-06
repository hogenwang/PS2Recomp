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

// Function: sub_00206490
// Address: 0x206490 - 0x2067b0
void sub_00206490_0x206490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206490_0x206490");
#endif

    switch (ctx->pc) {
        case 0x2064ccu: goto label_2064cc;
        case 0x206574u: goto label_206574;
        case 0x20657cu: goto label_20657c;
        case 0x20659cu: goto label_20659c;
        case 0x2065f4u: goto label_2065f4;
        case 0x206608u: goto label_206608;
        case 0x206684u: goto label_206684;
        case 0x2066fcu: goto label_2066fc;
        case 0x206718u: goto label_206718;
        case 0x20672cu: goto label_20672c;
        case 0x206748u: goto label_206748;
        case 0x206760u: goto label_206760;
        case 0x206768u: goto label_206768;
        case 0x206788u: goto label_206788;
        case 0x20679cu: goto label_20679c;
        default: break;
    }

    ctx->pc = 0x206490u;

    // 0x206490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206494: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x206494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x206498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20649c: 0x9064e820  lbu         $a0, -0x17E0($v1)
    ctx->pc = 0x20649cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961184)));
    // 0x2064a0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2064a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2064a4: 0x5483000c  bnel        $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2064A4u;
    {
        const bool branch_taken_0x2064a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2064a4) {
            ctx->pc = 0x2064A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2064A4u;
            // 0x2064a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2064D8u;
            goto label_2064d8;
        }
    }
    ctx->pc = 0x2064ACu;
    // 0x2064ac: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2064acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2064b0: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2064b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2064b4: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x2064b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2064b8: 0x28810030  slti        $at, $a0, 0x30
    ctx->pc = 0x2064b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2064bc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2064BCu;
    {
        const bool branch_taken_0x2064bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064bc) {
            ctx->pc = 0x2064CCu;
            goto label_2064cc;
        }
    }
    ctx->pc = 0x2064C4u;
    // 0x2064c4: 0xc0818bc  jal         func_2062F0
    ctx->pc = 0x2064C4u;
    SET_GPR_U32(ctx, 31, 0x2064CCu);
    ctx->pc = 0x2062F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2062F0u, 0x2064C4u, 0x2064CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064CCu;
label_2064cc:
    // 0x2064cc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x2064ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x2064d0: 0xa060e820  sb          $zero, -0x17E0($v1)
    ctx->pc = 0x2064d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961184), (uint8_t)GPR_U32(ctx, 0));
    // 0x2064d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2064d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2064d8:
    // 0x2064d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2064D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2064DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064D8u;
        // 0x2064dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2064D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2064E0u;
    // 0x2064e0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x2064e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x2064e4: 0x90659480  lbu         $a1, -0x6B80($v1)
    ctx->pc = 0x2064e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939776)));
    // 0x2064e8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2064e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2064ec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x2064ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x2064f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2064f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2064f4: 0x2463ea22  addiu       $v1, $v1, -0x15DE
    ctx->pc = 0x2064f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961698));
    // 0x2064f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2064f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2064fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2064fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x206500: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x206500u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206504: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x206504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x206508: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x206508u;
    {
        const bool branch_taken_0x206508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x206508) {
            ctx->pc = 0x206528u;
            goto label_206528;
        }
    }
    ctx->pc = 0x206510u;
    // 0x206510: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x206510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x206514: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x206514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x206518: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x206518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20651c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x20651cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x206520: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x206520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x206524: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x206524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
label_206528:
    // 0x206528: 0x3e00008  jr          $ra
    ctx->pc = 0x206528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206530u;
    // 0x206530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x206530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x206534: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x206534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x206538: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x206538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20653c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20653cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x206540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x206544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x206544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x206548: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x206548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x20654c: 0x906304f0  lbu         $v1, 0x4F0($v1)
    ctx->pc = 0x20654cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x206550: 0x5060004d  beql        $v1, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x206550u;
    {
        const bool branch_taken_0x206550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x206550) {
            ctx->pc = 0x206554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206550u;
            // 0x206554: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206688u;
            goto label_206688;
        }
    }
    ctx->pc = 0x206558u;
    // 0x206558: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x206558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x20655c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x20655cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x206560: 0x2442a1d4  addiu       $v0, $v0, -0x5E2C
    ctx->pc = 0x206560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943188));
    // 0x206564: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x206564u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206568: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x206568u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x20656c: 0xc081120  jal         func_204480
    ctx->pc = 0x20656Cu;
    SET_GPR_U32(ctx, 31, 0x206574u);
    ctx->pc = 0x206570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20656Cu;
    // 0x206570: 0x24c6a064  addiu       $a2, $a2, -0x5F9C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942820));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x20656Cu, 0x206574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206574u;
label_206574:
    // 0x206574: 0xc0813d4  jal         func_204F50
    ctx->pc = 0x206574u;
    SET_GPR_U32(ctx, 31, 0x20657Cu);
    ctx->pc = 0x206578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206574u;
    // 0x206578: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204F50u, 0x206574u, 0x20657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20657Cu;
label_20657c:
    // 0x20657c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20657cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x206580: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x206580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206584: 0x8c659bf8  lw          $a1, -0x6408($v1)
    ctx->pc = 0x206584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x206588: 0x90a304f0  lbu         $v1, 0x4F0($a1)
    ctx->pc = 0x206588u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1264)));
    // 0x20658c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20658Cu;
    {
        const bool branch_taken_0x20658c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x20658c) {
            ctx->pc = 0x20659Cu;
            goto label_20659c;
        }
    }
    ctx->pc = 0x206594u;
    // 0x206594: 0xc0813e8  jal         func_204FA0
    ctx->pc = 0x206594u;
    SET_GPR_U32(ctx, 31, 0x20659Cu);
    ctx->pc = 0x206598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206594u;
    // 0x206598: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204FA0u, 0x206594u, 0x20659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20659Cu;
label_20659c:
    // 0x20659c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20659cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2065a0: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x2065a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2065a4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2065a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2065a8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2065A8u;
    {
        const bool branch_taken_0x2065a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2065a8) {
            ctx->pc = 0x2065ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2065A8u;
            // 0x2065ac: 0x90880064  lbu         $t0, 0x64($a0) (Delay Slot)
            SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2065C8u;
            goto label_2065c8;
        }
    }
    ctx->pc = 0x2065B0u;
    // 0x2065b0: 0x90880066  lbu         $t0, 0x66($a0)
    ctx->pc = 0x2065b0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 102)));
    // 0x2065b4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2065b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2065b8: 0x90870067  lbu         $a3, 0x67($a0)
    ctx->pc = 0x2065b8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 103)));
    // 0x2065bc: 0x2411003e  addiu       $s1, $zero, 0x3E
    ctx->pc = 0x2065bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2065c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2065C0u;
    {
        const bool branch_taken_0x2065c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2065C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065C0u;
        // 0x2065c4: 0x24639860  addiu       $v1, $v1, -0x67A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065c0) {
            ctx->pc = 0x2065D8u;
            goto label_2065d8;
        }
    }
    ctx->pc = 0x2065C8u;
label_2065c8:
    // 0x2065c8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2065c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2065cc: 0x90870065  lbu         $a3, 0x65($a0)
    ctx->pc = 0x2065ccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 101)));
    // 0x2065d0: 0x24110150  addiu       $s1, $zero, 0x150
    ctx->pc = 0x2065d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x2065d4: 0x24639820  addiu       $v1, $v1, -0x67E0
    ctx->pc = 0x2065d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940704));
label_2065d8:
    // 0x2065d8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x2065d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2065dc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2065DCu;
    {
        const bool branch_taken_0x2065dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2065dc) {
            ctx->pc = 0x206620u;
            goto label_206620;
        }
    }
    ctx->pc = 0x2065E4u;
    // 0x2065e4: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2065e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2065e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2065e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2065ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2065f0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2065f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2065f4:
    // 0x2065f4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2065f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2065f8: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2065f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2065fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2065fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206600: 0xc081120  jal         func_204480
    ctx->pc = 0x206600u;
    SET_GPR_U32(ctx, 31, 0x206608u);
    ctx->pc = 0x206604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206600u;
    // 0x206604: 0x24c69efc  addiu       $a2, $a2, -0x6104 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x206600u, 0x206608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206608u;
label_206608:
    // 0x206608: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x206608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20660c: 0x2a03000f  slti        $v1, $s0, 0xF
    ctx->pc = 0x20660cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x206610: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x206610u;
    {
        const bool branch_taken_0x206610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206610u;
        // 0x206614: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206610) {
            ctx->pc = 0x2065F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2065f4;
        }
    }
    ctx->pc = 0x206618u;
    // 0x206618: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x206618u;
    {
        const bool branch_taken_0x206618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206618) {
            ctx->pc = 0x206684u;
            goto label_206684;
        }
    }
    ctx->pc = 0x206620u;
label_206620:
    // 0x206620: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x206620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x206624: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x206624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x206628: 0x8c86da70  lw          $a2, -0x2590($a0)
    ctx->pc = 0x206628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957680)));
    // 0x20662c: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x20662cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x206630: 0x3c048888  lui         $a0, 0x8888
    ctx->pc = 0x206630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34952 << 16));
    // 0x206634: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x206634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x206638: 0x3010  mfhi        $a2
    ctx->pc = 0x206638u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x20663c: 0x62a00  sll         $a1, $a2, 8
    ctx->pc = 0x20663cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x206640: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x206640u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x206644: 0x850019  multu       $a0, $a1
    ctx->pc = 0x206644u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x206648: 0x2010  mfhi        $a0
    ctx->pc = 0x206648u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20664c: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x20664cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x206650: 0x2c810089  sltiu       $at, $a0, 0x89
    ctx->pc = 0x206650u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)137) ? 1 : 0);
    // 0x206654: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x206654u;
    {
        const bool branch_taken_0x206654 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x206654) {
            ctx->pc = 0x206684u;
            goto label_206684;
        }
    }
    ctx->pc = 0x20665Cu;
    // 0x20665c: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x20665cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x206660: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x206660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x206664: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x206664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x206668: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x206668u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20666c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20666cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206670: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x206670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x206674: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x206674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206678: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x206678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x20667c: 0xc081120  jal         func_204480
    ctx->pc = 0x20667Cu;
    SET_GPR_U32(ctx, 31, 0x206684u);
    ctx->pc = 0x206680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20667Cu;
    // 0x206680: 0x24c69efc  addiu       $a2, $a2, -0x6104 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x20667Cu, 0x206684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206684u;
label_206684:
    // 0x206684: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x206684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_206688:
    // 0x206688: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x206688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20668c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20668cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206694: 0x3e00008  jr          $ra
    ctx->pc = 0x206694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206694u;
        // 0x206698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20669Cu;
    // 0x20669c: 0x0  nop
    ctx->pc = 0x20669cu;
    // NOP
    // 0x2066a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2066a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2066a4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2066a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2066a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2066a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2066ac: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x2066acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2066b0: 0x908304f0  lbu         $v1, 0x4F0($a0)
    ctx->pc = 0x2066b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x2066b4: 0x5460003a  bnel        $v1, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x2066B4u;
    {
        const bool branch_taken_0x2066b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2066b4) {
            ctx->pc = 0x2066B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2066B4u;
            // 0x2066b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2067A0u;
            goto label_2067a0;
        }
    }
    ctx->pc = 0x2066BCu;
    // 0x2066bc: 0x90830062  lbu         $v1, 0x62($a0)
    ctx->pc = 0x2066bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 98)));
    // 0x2066c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2066c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2066c4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2066C4u;
    {
        const bool branch_taken_0x2066c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2066c4) {
            ctx->pc = 0x2066C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2066C4u;
            // 0x2066c8: 0x90820061  lbu         $v0, 0x61($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 97)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x2066CCu;
    // 0x2066cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2066CCu;
    {
        const bool branch_taken_0x2066cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2066D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066CCu;
        // 0x2066d0: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066cc) {
            ctx->pc = 0x206734u;
            goto label_206734;
        }
    }
    ctx->pc = 0x2066D4u;
label_2066d4:
    // 0x2066d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2066D4u;
    {
        const bool branch_taken_0x2066d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066d4) {
            ctx->pc = 0x206718u;
            goto label_206718;
        }
    }
    ctx->pc = 0x2066DCu;
    // 0x2066dc: 0x90820063  lbu         $v0, 0x63($a0)
    ctx->pc = 0x2066dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 99)));
    // 0x2066e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2066E0u;
    {
        const bool branch_taken_0x2066e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066e0) {
            ctx->pc = 0x206704u;
            goto label_206704;
        }
    }
    ctx->pc = 0x2066E8u;
    // 0x2066e8: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2066e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2066ec: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x2066ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x2066f0: 0x24050174  addiu       $a1, $zero, 0x174
    ctx->pc = 0x2066f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x2066f4: 0xc081120  jal         func_204480
    ctx->pc = 0x2066F4u;
    SET_GPR_U32(ctx, 31, 0x2066FCu);
    ctx->pc = 0x2066F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2066F4u;
    // 0x2066f8: 0x24c69f14  addiu       $a2, $a2, -0x60EC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x2066F4u, 0x2066FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066FCu;
label_2066fc:
    // 0x2066fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2066FCu;
    {
        const bool branch_taken_0x2066fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066fc) {
            ctx->pc = 0x206718u;
            goto label_206718;
        }
    }
    ctx->pc = 0x206704u;
label_206704:
    // 0x206704: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x206704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x206708: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x206708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x20670c: 0x24050174  addiu       $a1, $zero, 0x174
    ctx->pc = 0x20670cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x206710: 0xc081120  jal         func_204480
    ctx->pc = 0x206710u;
    SET_GPR_U32(ctx, 31, 0x206718u);
    ctx->pc = 0x206714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206710u;
    // 0x206714: 0x24c69f20  addiu       $a2, $a2, -0x60E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x206710u, 0x206718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206718u;
label_206718:
    // 0x206718: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x206718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x20671c: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x20671cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x206720: 0x24050174  addiu       $a1, $zero, 0x174
    ctx->pc = 0x206720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x206724: 0xc081120  jal         func_204480
    ctx->pc = 0x206724u;
    SET_GPR_U32(ctx, 31, 0x20672Cu);
    ctx->pc = 0x206728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206724u;
    // 0x206728: 0x24c69ea8  addiu       $a2, $a2, -0x6158 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x206724u, 0x20672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20672Cu;
label_20672c:
    // 0x20672c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20672Cu;
    {
        const bool branch_taken_0x20672c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20672c) {
            ctx->pc = 0x206760u;
            goto label_206760;
        }
    }
    ctx->pc = 0x206734u;
label_206734:
    // 0x206734: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x206734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x206738: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x206738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x20673c: 0x24450130  addiu       $a1, $v0, 0x130
    ctx->pc = 0x20673cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x206740: 0xc081120  jal         func_204480
    ctx->pc = 0x206740u;
    SET_GPR_U32(ctx, 31, 0x206748u);
    ctx->pc = 0x206744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206740u;
    // 0x206744: 0x24c6a028  addiu       $a2, $a2, -0x5FD8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x206740u, 0x206748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206748u;
label_206748:
    // 0x206748: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x206748u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x20674c: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x20674cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x206750: 0x24050174  addiu       $a1, $zero, 0x174
    ctx->pc = 0x206750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x206754: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x206754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x206758: 0xc0812c0  jal         func_204B00
    ctx->pc = 0x206758u;
    SET_GPR_U32(ctx, 31, 0x206760u);
    ctx->pc = 0x20675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206758u;
    // 0x20675c: 0x24e79e90  addiu       $a3, $a3, -0x6170 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204B00u, 0x206758u, 0x206760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206760u;
label_206760:
    // 0x206760: 0xc081110  jal         func_204440
    ctx->pc = 0x206760u;
    SET_GPR_U32(ctx, 31, 0x206768u);
    ctx->pc = 0x204440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204440u, 0x206760u, 0x206768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206768u;
label_206768:
    // 0x206768: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x206768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20676c: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x20676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x206770: 0x90420062  lbu         $v0, 0x62($v0)
    ctx->pc = 0x206770u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x206774: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x206774u;
    {
        const bool branch_taken_0x206774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206774) {
            ctx->pc = 0x206778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206774u;
            // 0x206778: 0x240401f0  addiu       $a0, $zero, 0x1F0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206790u;
            goto label_206790;
        }
    }
    ctx->pc = 0x20677Cu;
    // 0x20677c: 0x240401f0  addiu       $a0, $zero, 0x1F0
    ctx->pc = 0x20677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x206780: 0xc0812f8  jal         func_204BE0
    ctx->pc = 0x206780u;
    SET_GPR_U32(ctx, 31, 0x206788u);
    ctx->pc = 0x206784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206780u;
    // 0x206784: 0x24050130  addiu       $a1, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204BE0u, 0x206780u, 0x206788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206788u;
label_206788:
    // 0x206788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x206788u;
    {
        const bool branch_taken_0x206788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206788) {
            ctx->pc = 0x20679Cu;
            goto label_20679c;
        }
    }
    ctx->pc = 0x206790u;
label_206790:
    // 0x206790: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x206790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x206794: 0xc0812c4  jal         func_204B10
    ctx->pc = 0x206794u;
    SET_GPR_U32(ctx, 31, 0x20679Cu);
    ctx->pc = 0x206798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206794u;
    // 0x206798: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204B10u, 0x206794u, 0x20679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20679Cu;
label_20679c:
    // 0x20679c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20679cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2067a0:
    // 0x2067a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2067A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2067A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067A0u;
        // 0x2067a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2067A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2067A8u;
    // 0x2067a8: 0x0  nop
    ctx->pc = 0x2067a8u;
    // NOP
    // 0x2067ac: 0x0  nop
    ctx->pc = 0x2067acu;
    // NOP
    if (ctx->pc == 0x2067acu) { ctx->pc = 0x2067b0u; }
}
