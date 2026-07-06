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

// Function: sub_001EF8E8
// Address: 0x1ef8e8 - 0x1efa48
void sub_001EF8E8_0x1ef8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF8E8_0x1ef8e8");
#endif

    switch (ctx->pc) {
        case 0x1ef9c0u: goto label_1ef9c0;
        case 0x1ef9e4u: goto label_1ef9e4;
        case 0x1ef9ecu: goto label_1ef9ec;
        case 0x1efa00u: goto label_1efa00;
        default: break;
    }

    ctx->pc = 0x1ef8e8u;

    // 0x1ef8e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef8ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef8f4: 0x80762ac  j           func_1D8AB0
    ctx->pc = 0x1EF8F4u;
    ctx->pc = 0x1EF8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF8F4u;
    // 0x1ef8f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AB0u;
    sub_001D8AB0_0x1d8ab0(rdram, ctx, runtime); return;
    ctx->pc = 0x1EF8FCu;
    // 0x1ef8fc: 0x0  nop
    ctx->pc = 0x1ef8fcu;
    // NOP
    // 0x1ef900: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF900u;
        // 0x1ef904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF908u;
    // 0x1ef908: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF908u;
        // 0x1ef90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF910u;
    // 0x1ef910: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF910u;
        // 0x1ef914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF918u;
    // 0x1ef918: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF918u;
        // 0x1ef91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF920u;
    // 0x1ef920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef924: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ef924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ef928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef92c: 0x34a50d0b  ori         $a1, $a1, 0xD0B
    ctx->pc = 0x1ef92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3339);
    // 0x1ef930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef934: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EF934u;
    ctx->pc = 0x1EF938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF934u;
    // 0x1ef938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EF93Cu;
    // 0x1ef93c: 0x0  nop
    ctx->pc = 0x1ef93cu;
    // NOP
    // 0x1ef940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef944: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ef944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ef948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef94c: 0x34a50d0b  ori         $a1, $a1, 0xD0B
    ctx->pc = 0x1ef94cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3339);
    // 0x1ef950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef954: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EF954u;
    ctx->pc = 0x1EF958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF954u;
    // 0x1ef958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EF95Cu;
    // 0x1ef95c: 0x0  nop
    ctx->pc = 0x1ef95cu;
    // NOP
    // 0x1ef960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef964: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ef964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ef968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef96c: 0x34a50d0b  ori         $a1, $a1, 0xD0B
    ctx->pc = 0x1ef96cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3339);
    // 0x1ef970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef974: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EF974u;
    ctx->pc = 0x1EF978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF974u;
    // 0x1ef978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EF97Cu;
    // 0x1ef97c: 0x0  nop
    ctx->pc = 0x1ef97cu;
    // NOP
    // 0x1ef980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef984: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ef984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ef988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef98c: 0x34a50d0b  ori         $a1, $a1, 0xD0B
    ctx->pc = 0x1ef98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3339);
    // 0x1ef990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef994: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EF994u;
    ctx->pc = 0x1EF998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF994u;
    // 0x1ef998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EF99Cu;
    // 0x1ef99c: 0x0  nop
    ctx->pc = 0x1ef99cu;
    // NOP
    // 0x1ef9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ef9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ef9a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef9a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ef9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ef9ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ef9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ef9b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ef9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ef9b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ef9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ef9b8: 0xc07bebc  jal         func_1EFAF0
    ctx->pc = 0x1EF9B8u;
    SET_GPR_U32(ctx, 31, 0x1EF9C0u);
    ctx->pc = 0x1EF9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9B8u;
    // 0x1ef9bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFAF0u, 0x1EF9B8u, 0x1EF9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9C0u;
label_1ef9c0:
    // 0x1ef9c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ef9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef9c4: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EF9C4u;
    {
        const bool branch_taken_0x1ef9c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef9c4) {
            ctx->pc = 0x1EF9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF9C4u;
            // 0x1ef9c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFA2Cu;
            goto label_1efa2c;
        }
    }
    ctx->pc = 0x1EF9CCu;
    // 0x1ef9cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ef9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef9d0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EF9D0u;
    {
        const bool branch_taken_0x1ef9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9D0u;
        // 0x1ef9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9d0) {
            ctx->pc = 0x1EFA28u;
            goto label_1efa28;
        }
    }
    ctx->pc = 0x1EF9D8u;
    // 0x1ef9d8: 0x8e321fd4  lw          $s2, 0x1FD4($s1)
    ctx->pc = 0x1ef9d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8148)));
    // 0x1ef9dc: 0xc07b35a  jal         func_1ECD68
    ctx->pc = 0x1EF9DCu;
    SET_GPR_U32(ctx, 31, 0x1EF9E4u);
    ctx->pc = 0x1EF9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9DCu;
    // 0x1ef9e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECD68u, 0x1EF9DCu, 0x1EF9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9E4u;
label_1ef9e4:
    // 0x1ef9e4: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x1EF9E4u;
    SET_GPR_U32(ctx, 31, 0x1EF9ECu);
    ctx->pc = 0x1EF9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9E4u;
    // 0x1ef9e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x1EF9E4u, 0x1EF9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9ECu;
label_1ef9ec:
    // 0x1ef9ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ef9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef9f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ef9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef9f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ef9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef9f8: 0xc07be94  jal         func_1EFA50
    ctx->pc = 0x1EF9F8u;
    SET_GPR_U32(ctx, 31, 0x1EFA00u);
    ctx->pc = 0x1EF9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9F8u;
    // 0x1ef9fc: 0x26330d88  addiu       $s3, $s1, 0xD88 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA50u, 0x1EF9F8u, 0x1EFA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA00u;
label_1efa00:
    // 0x1efa00: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1EFA00u;
    {
        const bool branch_taken_0x1efa00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efa00) {
            ctx->pc = 0x1EFA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFA00u;
            // 0x1efa04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFA2Cu;
            goto label_1efa2c;
        }
    }
    ctx->pc = 0x1EFA08u;
    // 0x1efa08: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1efa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1efa0c: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1efa0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1efa10: 0xae44002c  sw          $a0, 0x2C($s2)
    ctx->pc = 0x1efa10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 4));
    // 0x1efa14: 0xfe630150  sd          $v1, 0x150($s3)
    ctx->pc = 0x1efa14u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 336), GPR_U64(ctx, 3));
    // 0x1efa18: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1efa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1efa1c: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x1efa1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1efa20: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x1efa20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
    // 0x1efa24: 0xfe430010  sd          $v1, 0x10($s2)
    ctx->pc = 0x1efa24u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 3));
label_1efa28:
    // 0x1efa28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1efa28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1efa2c:
    // 0x1efa2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1efa2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1efa30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1efa30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efa34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1efa34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1efa38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1efa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA3Cu;
        // 0x1efa40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFA44u;
    // 0x1efa44: 0x0  nop
    ctx->pc = 0x1efa44u;
    // NOP
    if (ctx->pc == 0x1efa44u) { ctx->pc = 0x1efa48u; }
}
