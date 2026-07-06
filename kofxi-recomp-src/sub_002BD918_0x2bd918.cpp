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

// Function: sub_002BD918
// Address: 0x2bd918 - 0x2bd9a8
void sub_002BD918_0x2bd918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD918_0x2bd918");
#endif

    switch (ctx->pc) {
        case 0x2bd918u: goto label_2bd918;
        case 0x2bd91cu: goto label_2bd91c;
        case 0x2bd920u: goto label_2bd920;
        case 0x2bd924u: goto label_2bd924;
        case 0x2bd928u: goto label_2bd928;
        case 0x2bd92cu: goto label_2bd92c;
        case 0x2bd930u: goto label_2bd930;
        case 0x2bd934u: goto label_2bd934;
        case 0x2bd938u: goto label_2bd938;
        case 0x2bd93cu: goto label_2bd93c;
        case 0x2bd940u: goto label_2bd940;
        case 0x2bd944u: goto label_2bd944;
        case 0x2bd948u: goto label_2bd948;
        case 0x2bd94cu: goto label_2bd94c;
        case 0x2bd950u: goto label_2bd950;
        case 0x2bd954u: goto label_2bd954;
        case 0x2bd958u: goto label_2bd958;
        case 0x2bd95cu: goto label_2bd95c;
        case 0x2bd960u: goto label_2bd960;
        case 0x2bd964u: goto label_2bd964;
        case 0x2bd968u: goto label_2bd968;
        case 0x2bd96cu: goto label_2bd96c;
        case 0x2bd970u: goto label_2bd970;
        case 0x2bd974u: goto label_2bd974;
        case 0x2bd978u: goto label_2bd978;
        case 0x2bd97cu: goto label_2bd97c;
        case 0x2bd980u: goto label_2bd980;
        case 0x2bd984u: goto label_2bd984;
        case 0x2bd988u: goto label_2bd988;
        case 0x2bd98cu: goto label_2bd98c;
        case 0x2bd990u: goto label_2bd990;
        case 0x2bd994u: goto label_2bd994;
        case 0x2bd998u: goto label_2bd998;
        case 0x2bd99cu: goto label_2bd99c;
        case 0x2bd9a0u: goto label_2bd9a0;
        case 0x2bd9a4u: goto label_2bd9a4;
        default: break;
    }

    ctx->pc = 0x2bd918u;

label_2bd918:
    // 0x2bd918: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bd918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2bd91c:
    // 0x2bd91c: 0x3e00008  jr          $ra
label_2bd920:
    if (ctx->pc == 0x2BD920u) {
        ctx->pc = 0x2BD920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD91Cu;
        // 0x2bd920: 0x24427da8  addiu       $v0, $v0, 0x7DA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD924u;
        goto label_2bd924;
    }
    ctx->pc = 0x2BD91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD91Cu;
        // 0x2bd920: 0x24427da8  addiu       $v0, $v0, 0x7DA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD924u;
label_2bd924:
    // 0x2bd924: 0x0  nop
    ctx->pc = 0x2bd924u;
    // NOP
label_2bd928:
    // 0x2bd928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2bd92c:
    // 0x2bd92c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bd92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2bd930:
    // 0x2bd930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bd930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bd934:
    // 0x2bd934: 0xc0ab9d2  jal         func_2AE748
label_2bd938:
    if (ctx->pc == 0x2BD938u) {
        ctx->pc = 0x2BD938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD934u;
        // 0x2bd938: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD93Cu;
        goto label_2bd93c;
    }
    ctx->pc = 0x2BD934u;
    SET_GPR_U32(ctx, 31, 0x2BD93Cu);
    ctx->pc = 0x2BD938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD934u;
    // 0x2bd938: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE748u, 0x2BD934u, 0x2BD93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD93Cu;
label_2bd93c:
    // 0x2bd93c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2bd940:
    if (ctx->pc == 0x2BD940u) {
        ctx->pc = 0x2BD940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD93Cu;
        // 0x2bd940: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD944u;
        goto label_2bd944;
    }
    ctx->pc = 0x2BD93Cu;
    {
        const bool branch_taken_0x2bd93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd93c) {
            ctx->pc = 0x2BD940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD93Cu;
            // 0x2bd940: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD94Cu;
            goto label_2bd94c;
        }
    }
    ctx->pc = 0x2BD944u;
label_2bd944:
    // 0x2bd944: 0x10000005  b           . + 4 + (0x5 << 2)
label_2bd948:
    if (ctx->pc == 0x2BD948u) {
        ctx->pc = 0x2BD948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD944u;
        // 0x2bd948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD94Cu;
        goto label_2bd94c;
    }
    ctx->pc = 0x2BD944u;
    {
        const bool branch_taken_0x2bd944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD944u;
        // 0x2bd948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd944) {
            ctx->pc = 0x2BD95Cu;
            goto label_2bd95c;
        }
    }
    ctx->pc = 0x2BD94Cu;
label_2bd94c:
    // 0x2bd94c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2bd94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2bd950:
    // 0x2bd950: 0x40f809  jalr        $v0
label_2bd954:
    if (ctx->pc == 0x2BD954u) {
        ctx->pc = 0x2BD954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD950u;
        // 0x2bd954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD958u;
        goto label_2bd958;
    }
    ctx->pc = 0x2BD950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BD958u);
        ctx->pc = 0x2BD954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD950u;
        // 0x2bd954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD950u, 0x2BD958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BD958u;
label_2bd958:
    // 0x2bd958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd95c:
    // 0x2bd95c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bd95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bd960:
    // 0x2bd960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bd960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bd964:
    // 0x2bd964: 0x3e00008  jr          $ra
label_2bd968:
    if (ctx->pc == 0x2BD968u) {
        ctx->pc = 0x2BD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD964u;
        // 0x2bd968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD96Cu;
        goto label_2bd96c;
    }
    ctx->pc = 0x2BD964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD964u;
        // 0x2bd968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD96Cu;
label_2bd96c:
    // 0x2bd96c: 0x0  nop
    ctx->pc = 0x2bd96cu;
    // NOP
label_2bd970:
    // 0x2bd970: 0x80aba02  j           func_2AE808
label_2bd974:
    if (ctx->pc == 0x2BD974u) {
        ctx->pc = 0x2BD978u;
        goto label_2bd978;
    }
    ctx->pc = 0x2BD970u;
    ctx->pc = 0x2AE808u;
    sub_002AE808_0x2ae808(rdram, ctx, runtime); return;
    ctx->pc = 0x2BD978u;
label_2bd978:
    // 0x2bd978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2bd97c:
    // 0x2bd97c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bd97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2bd980:
    // 0x2bd980: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bd980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bd984:
    // 0x2bd984: 0xc0aba32  jal         func_2AE8C8
label_2bd988:
    if (ctx->pc == 0x2BD988u) {
        ctx->pc = 0x2BD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD984u;
        // 0x2bd988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD98Cu;
        goto label_2bd98c;
    }
    ctx->pc = 0x2BD984u;
    SET_GPR_U32(ctx, 31, 0x2BD98Cu);
    ctx->pc = 0x2BD988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD984u;
    // 0x2bd988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE8C8u, 0x2BD984u, 0x2BD98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD98Cu;
label_2bd98c:
    // 0x2bd98c: 0x24020301  addiu       $v0, $zero, 0x301
    ctx->pc = 0x2bd98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
label_2bd990:
    // 0x2bd990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bd990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bd994:
    // 0x2bd994: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bd994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2bd998:
    // 0x2bd998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bd998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bd99c:
    // 0x2bd99c: 0x3e00008  jr          $ra
label_2bd9a0:
    if (ctx->pc == 0x2BD9A0u) {
        ctx->pc = 0x2BD9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD99Cu;
        // 0x2bd9a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD9A4u;
        goto label_2bd9a4;
    }
    ctx->pc = 0x2BD99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD99Cu;
        // 0x2bd9a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD9A4u;
label_2bd9a4:
    // 0x2bd9a4: 0x0  nop
    ctx->pc = 0x2bd9a4u;
    // NOP
    if (ctx->pc == 0x2bd9a4u) { ctx->pc = 0x2bd9a8u; }
}
