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

// Function: sub_00342940
// Address: 0x342940 - 0x3429b0
void sub_00342940_0x342940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342940_0x342940");
#endif

    switch (ctx->pc) {
        case 0x342950u: goto label_342950;
        case 0x342980u: goto label_342980;
        default: break;
    }

    ctx->pc = 0x342940u;

    // 0x342940: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x342940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x342944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x342944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342948: 0x2484ec90  addiu       $a0, $a0, -0x1370
    ctx->pc = 0x342948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962320));
    // 0x34294c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34294cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_342950:
    // 0x342950: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x342950u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x342954: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x342954u;
    {
        const bool branch_taken_0x342954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x342954) {
            ctx->pc = 0x342958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342954u;
            // 0x342958: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342964u;
            goto label_342964;
        }
    }
    ctx->pc = 0x34295Cu;
    // 0x34295c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x34295Cu;
    {
        const bool branch_taken_0x34295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34295Cu;
        // 0x342960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34295c) {
            ctx->pc = 0x3429A4u;
            goto label_3429a4;
        }
    }
    ctx->pc = 0x342964u;
label_342964:
    // 0x342964: 0x28a20028  slti        $v0, $a1, 0x28
    ctx->pc = 0x342964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x342968: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x342968u;
    {
        const bool branch_taken_0x342968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342968u;
        // 0x34296c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342968) {
            ctx->pc = 0x342950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_342950;
        }
    }
    ctx->pc = 0x342970u;
    // 0x342970: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x342970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x342974: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x342974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342978: 0x24a5ec90  addiu       $a1, $a1, -0x1370
    ctx->pc = 0x342978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962320));
    // 0x34297c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34297cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_342980:
    // 0x342980: 0x90a20028  lbu         $v0, 0x28($a1)
    ctx->pc = 0x342980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x342984: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x342984u;
    {
        const bool branch_taken_0x342984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x342984) {
            ctx->pc = 0x342988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342984u;
            // 0x342988: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342994u;
            goto label_342994;
        }
    }
    ctx->pc = 0x34298Cu;
    // 0x34298c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34298Cu;
    {
        const bool branch_taken_0x34298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34298Cu;
        // 0x342990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34298c) {
            ctx->pc = 0x3429A4u;
            goto label_3429a4;
        }
    }
    ctx->pc = 0x342994u;
label_342994:
    // 0x342994: 0x28820022  slti        $v0, $a0, 0x22
    ctx->pc = 0x342994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x342998: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x342998u;
    {
        const bool branch_taken_0x342998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342998u;
        // 0x34299c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342998) {
            ctx->pc = 0x342980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_342980;
        }
    }
    ctx->pc = 0x3429A0u;
    // 0x3429a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3429a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3429a4:
    // 0x3429a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3429A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3429A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3429ACu;
    // 0x3429ac: 0x0  nop
    ctx->pc = 0x3429acu;
    // NOP
    if (ctx->pc == 0x3429acu) { ctx->pc = 0x3429b0u; }
}
