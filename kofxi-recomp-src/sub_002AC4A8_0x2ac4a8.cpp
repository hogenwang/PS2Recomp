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

// Function: sub_002AC4A8
// Address: 0x2ac4a8 - 0x2ac5c0
void sub_002AC4A8_0x2ac4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC4A8_0x2ac4a8");
#endif

    switch (ctx->pc) {
        case 0x2ac550u: goto label_2ac550;
        case 0x2ac558u: goto label_2ac558;
        case 0x2ac568u: goto label_2ac568;
        case 0x2ac578u: goto label_2ac578;
        case 0x2ac588u: goto label_2ac588;
        case 0x2ac598u: goto label_2ac598;
        default: break;
    }

    ctx->pc = 0x2ac4a8u;

    // 0x2ac4a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ac4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ac4ac: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2ac4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2ac4b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ac4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ac4b4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2ac4b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac4b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ac4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ac4bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac4c0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2ac4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2ac4c4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2ac4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ac4c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ac4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ac4cc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC4CCu;
    {
        const bool branch_taken_0x2ac4cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC4CCu;
        // 0x2ac4d0: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac4cc) {
            ctx->pc = 0x2AC4F0u;
            goto label_2ac4f0;
        }
    }
    ctx->pc = 0x2AC4D4u;
    // 0x2ac4d4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2ac4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2ac4d8: 0x8e110078  lw          $s1, 0x78($s0)
    ctx->pc = 0x2ac4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2ac4dc: 0x8c540058  lw          $s4, 0x58($v0)
    ctx->pc = 0x2ac4dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2ac4e0: 0xdc4600e0  ld          $a2, 0xE0($v0)
    ctx->pc = 0x2ac4e0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x2ac4e4: 0x8c520068  lw          $s2, 0x68($v0)
    ctx->pc = 0x2ac4e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2ac4e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC4E8u;
    {
        const bool branch_taken_0x2ac4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC4E8u;
        // 0x2ac4ec: 0x8c530050  lw          $s3, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac4e8) {
            ctx->pc = 0x2AC508u;
            goto label_2ac508;
        }
    }
    ctx->pc = 0x2AC4F0u;
label_2ac4f0:
    // 0x2ac4f0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2ac4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2ac4f4: 0x8e11006c  lw          $s1, 0x6C($s0)
    ctx->pc = 0x2ac4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2ac4f8: 0x8c540054  lw          $s4, 0x54($v0)
    ctx->pc = 0x2ac4f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2ac4fc: 0xdc4600d8  ld          $a2, 0xD8($v0)
    ctx->pc = 0x2ac4fcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x2ac500: 0x8c520064  lw          $s2, 0x64($v0)
    ctx->pc = 0x2ac500u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2ac504: 0x8c530048  lw          $s3, 0x48($v0)
    ctx->pc = 0x2ac504u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2ac508:
    // 0x2ac508: 0x62a3a  dsrl        $a1, $a2, 8
    ctx->pc = 0x2ac508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) >> 8);
    // 0x2ac50c: 0x6163a  dsrl        $v0, $a2, 24
    ctx->pc = 0x2ac50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> 24);
    // 0x2ac510: 0x61c3a  dsrl        $v1, $a2, 16
    ctx->pc = 0x2ac510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) >> 16);
    // 0x2ac514: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2ac514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ac518: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2ac518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ac51c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ac51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ac520: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac524: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2ac524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ac528: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ac528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ac52c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac530: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2ac530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ac534: 0xa3a50002  sb          $a1, 0x2($sp)
    ctx->pc = 0x2ac534u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ac538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ac538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac53c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2ac53cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ac540: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x2ac540u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac548: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AC548u;
    SET_GPR_U32(ctx, 31, 0x2AC550u);
    ctx->pc = 0x2AC54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC548u;
    // 0x2ac54c: 0xa3a60003  sb          $a2, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AC548u, 0x2AC550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC550u;
label_2ac550:
    // 0x2ac550: 0xc0a5b0c  jal         func_296C30
    ctx->pc = 0x2AC550u;
    SET_GPR_U32(ctx, 31, 0x2AC558u);
    ctx->pc = 0x2AC554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC550u;
    // 0x2ac554: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C30u, 0x2AC550u, 0x2AC558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC558u;
label_2ac558:
    // 0x2ac558: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ac558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ac55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac560: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AC560u;
    SET_GPR_U32(ctx, 31, 0x2AC568u);
    ctx->pc = 0x2AC564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC560u;
    // 0x2ac564: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AC560u, 0x2AC568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC568u;
label_2ac568:
    // 0x2ac568: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ac568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac56c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ac56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac570: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AC570u;
    SET_GPR_U32(ctx, 31, 0x2AC578u);
    ctx->pc = 0x2AC574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC570u;
    // 0x2ac574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AC570u, 0x2AC578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC578u;
label_2ac578:
    // 0x2ac578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ac578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac57c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ac57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac580: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AC580u;
    SET_GPR_U32(ctx, 31, 0x2AC588u);
    ctx->pc = 0x2AC584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC580u;
    // 0x2ac584: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AC580u, 0x2AC588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC588u;
label_2ac588:
    // 0x2ac588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ac588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac58c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ac58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac590: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2AC590u;
    SET_GPR_U32(ctx, 31, 0x2AC598u);
    ctx->pc = 0x2AC594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC590u;
    // 0x2ac594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2AC590u, 0x2AC598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC598u;
label_2ac598:
    // 0x2ac598: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ac598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ac59c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2ac59cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ac5a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2ac5a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac5a4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2ac5a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ac5a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ac5a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac5ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ac5acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac5b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ac5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5B4u;
        // 0x2ac5b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC5BCu;
    // 0x2ac5bc: 0x0  nop
    ctx->pc = 0x2ac5bcu;
    // NOP
    if (ctx->pc == 0x2ac5bcu) { ctx->pc = 0x2ac5c0u; }
}
