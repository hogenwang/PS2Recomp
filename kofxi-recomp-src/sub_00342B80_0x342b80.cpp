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

// Function: sub_00342B80
// Address: 0x342b80 - 0x342c10
void sub_00342B80_0x342b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342B80_0x342b80");
#endif

    switch (ctx->pc) {
        case 0x342bf8u: goto label_342bf8;
        default: break;
    }

    ctx->pc = 0x342b80u;

    // 0x342b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x342b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x342b84: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x342b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x342b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x342b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x342b8c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x342b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x342b90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x342b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x342b94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x342b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342b98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x342B98u;
    {
        const bool branch_taken_0x342b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B98u;
        // 0x342b9c: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342b98) {
            ctx->pc = 0x342BB8u;
            goto label_342bb8;
        }
    }
    ctx->pc = 0x342BA0u;
    // 0x342ba0: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x342BA0u;
    {
        const bool branch_taken_0x342ba0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x342ba0) {
            ctx->pc = 0x342BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342BA0u;
            // 0x342ba4: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342BB0u;
            goto label_342bb0;
        }
    }
    ctx->pc = 0x342BA8u;
    // 0x342ba8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x342ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x342bac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x342bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_342bb0:
    // 0x342bb0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x342BB0u;
    {
        const bool branch_taken_0x342bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342BB0u;
        // 0x342bb4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342bb0) {
            ctx->pc = 0x342BDCu;
            goto label_342bdc;
        }
    }
    ctx->pc = 0x342BB8u;
label_342bb8:
    // 0x342bb8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x342bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x342bbc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x342BBCu;
    {
        const bool branch_taken_0x342bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342bbc) {
            ctx->pc = 0x342BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342BBCu;
            // 0x342bc0: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x342BE0u;
            goto label_342be0;
        }
    }
    ctx->pc = 0x342BC4u;
    // 0x342bc4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x342bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x342bc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x342bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x342bcc: 0x54a20002  bnel        $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x342BCCu;
    {
        const bool branch_taken_0x342bcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x342bcc) {
            ctx->pc = 0x342BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342BCCu;
            // 0x342bd0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342BD8u;
            goto label_342bd8;
        }
    }
    ctx->pc = 0x342BD4u;
    // 0x342bd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342bd8:
    // 0x342bd8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x342bd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_342bdc:
    // 0x342bdc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x342bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_342be0:
    // 0x342be0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x342be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x342be4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x342BE4u;
    {
        const bool branch_taken_0x342be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x342be4) {
            ctx->pc = 0x342BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342BE4u;
            // 0x342be8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342BFCu;
            goto label_342bfc;
        }
    }
    ctx->pc = 0x342BECu;
    // 0x342bec: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x342becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x342bf0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x342BF0u;
    SET_GPR_U32(ctx, 31, 0x342BF8u);
    ctx->pc = 0x342BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342BF0u;
    // 0x342bf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x342BF0u, 0x342BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342BF8u;
label_342bf8:
    // 0x342bf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x342bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342bfc:
    // 0x342bfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x342bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342c04: 0x3e00008  jr          $ra
    ctx->pc = 0x342C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C04u;
        // 0x342c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342C0Cu;
    // 0x342c0c: 0x0  nop
    ctx->pc = 0x342c0cu;
    // NOP
}
