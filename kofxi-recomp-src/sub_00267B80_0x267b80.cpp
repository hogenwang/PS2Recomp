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

// Function: sub_00267B80
// Address: 0x267b80 - 0x267c20
void sub_00267B80_0x267b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267B80_0x267b80");
#endif

    switch (ctx->pc) {
        case 0x267bb0u: goto label_267bb0;
        case 0x267bc0u: goto label_267bc0;
        case 0x267bd8u: goto label_267bd8;
        case 0x267bf0u: goto label_267bf0;
        case 0x267c04u: goto label_267c04;
        default: break;
    }

    ctx->pc = 0x267b80u;

    // 0x267b80: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x267b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x267b84: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x267b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x267b88: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x267b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x267b8c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x267b8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b90: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x267b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x267b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x267b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x267b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b9c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x267b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x267ba0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ba8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x267BA8u;
    SET_GPR_U32(ctx, 31, 0x267BB0u);
    ctx->pc = 0x267BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BA8u;
    // 0x267bac: 0x240600a8  addiu       $a2, $zero, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x267BA8u, 0x267BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267BB0u;
label_267bb0:
    // 0x267bb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x267bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267bb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267bb8: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267BB8u;
    SET_GPR_U32(ctx, 31, 0x267BC0u);
    ctx->pc = 0x267BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BB8u;
    // 0x267bbc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x267BB8u, 0x267BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267BC0u;
label_267bc0:
    // 0x267bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267bc4: 0x3405c0a8  ori         $a1, $zero, 0xC0A8
    ctx->pc = 0x267bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49320);
    // 0x267bc8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x267bcc: 0x34a56978  ori         $a1, $a1, 0x6978
    ctx->pc = 0x267bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27000);
    // 0x267bd0: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267BD0u;
    SET_GPR_U32(ctx, 31, 0x267BD8u);
    ctx->pc = 0x267BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BD0u;
    // 0x267bd4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x267BD0u, 0x267BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267BD8u;
label_267bd8:
    // 0x267bd8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267BD8u;
    {
        const bool branch_taken_0x267bd8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x267BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BD8u;
        // 0x267bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267bd8) {
            ctx->pc = 0x267BF8u;
            goto label_267bf8;
        }
    }
    ctx->pc = 0x267BE0u;
    // 0x267be0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x267be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x267be4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x267be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x267be8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x267BE8u;
    SET_GPR_U32(ctx, 31, 0x267BF0u);
    ctx->pc = 0x267BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BE8u;
    // 0x267bec: 0x24a57bc8  addiu       $a1, $a1, 0x7BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x267BE8u, 0x267BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267BF0u;
label_267bf0:
    // 0x267bf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x267BF0u;
    {
        const bool branch_taken_0x267bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BF0u;
        // 0x267bf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267bf0) {
            ctx->pc = 0x267C08u;
            goto label_267c08;
        }
    }
    ctx->pc = 0x267BF8u;
label_267bf8:
    // 0x267bf8: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x267bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x267bfc: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267BFCu;
    SET_GPR_U32(ctx, 31, 0x267C04u);
    ctx->pc = 0x267C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BFCu;
    // 0x267c00: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x267BFCu, 0x267C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C04u;
label_267c04:
    // 0x267c04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x267c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267c08:
    // 0x267c08: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x267c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x267c0c: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x267c0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x267c10: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x267c10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x267c14: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x267c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x267c18: 0x3e00008  jr          $ra
    ctx->pc = 0x267C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C18u;
        // 0x267c1c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267C20u;
}
