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

// Function: sub_001FBC18
// Address: 0x1fbc18 - 0x1fbc90
void sub_001FBC18_0x1fbc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBC18_0x1fbc18");
#endif

    switch (ctx->pc) {
        case 0x1fbc70u: goto label_1fbc70;
        default: break;
    }

    ctx->pc = 0x1fbc18u;

    // 0x1fbc18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fbc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fbc1c: 0x24830118  addiu       $v1, $a0, 0x118
    ctx->pc = 0x1fbc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
    // 0x1fbc20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbc24: 0x248400ec  addiu       $a0, $a0, 0xEC
    ctx->pc = 0x1fbc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 236));
    // 0x1fbc28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fbc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fbc2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fbc30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBC30u;
    {
        const bool branch_taken_0x1fbc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC30u;
        // 0x1fbc34: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc30) {
            ctx->pc = 0x1FBC48u;
            goto label_1fbc48;
        }
    }
    ctx->pc = 0x1FBC38u;
    // 0x1fbc38: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x1fbc38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1fbc3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FBC3Cu;
    {
        const bool branch_taken_0x1fbc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC3Cu;
        // 0x1fbc40: 0x8c700024  lw          $s0, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc3c) {
            ctx->pc = 0x1FBC68u;
            goto label_1fbc68;
        }
    }
    ctx->pc = 0x1FBC44u;
    // 0x1fbc44: 0x0  nop
    ctx->pc = 0x1fbc44u;
    // NOP
label_1fbc48:
    // 0x1fbc48: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1fbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1fbc4c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBC4Cu;
    {
        const bool branch_taken_0x1fbc4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FBC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC4Cu;
        // 0x1fbc50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc4c) {
            ctx->pc = 0x1FBC60u;
            goto label_1fbc60;
        }
    }
    ctx->pc = 0x1FBC54u;
    // 0x1fbc54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBC54u;
    {
        const bool branch_taken_0x1fbc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC54u;
        // 0x1fbc58: 0x8c860028  lw          $a2, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc54) {
            ctx->pc = 0x1FBC68u;
            goto label_1fbc68;
        }
    }
    ctx->pc = 0x1FBC5Cu;
    // 0x1fbc5c: 0x0  nop
    ctx->pc = 0x1fbc5cu;
    // NOP
label_1fbc60:
    // 0x1fbc60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FBC60u;
    {
        const bool branch_taken_0x1fbc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC60u;
        // 0x1fbc64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc60) {
            ctx->pc = 0x1FBC80u;
            goto label_1fbc80;
        }
    }
    ctx->pc = 0x1FBC68u;
label_1fbc68:
    // 0x1fbc68: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1FBC68u;
    SET_GPR_U32(ctx, 31, 0x1FBC70u);
    ctx->pc = 0x1FBC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC68u;
    // 0x1fbc6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC718u, 0x1FBC68u, 0x1FBC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC70u;
label_1fbc70:
    // 0x1fbc70: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1fbc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1fbc74: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1fbc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1fbc78: 0xac7017a4  sw          $s0, 0x17A4($v1)
    ctx->pc = 0x1fbc78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6052), GPR_U32(ctx, 16));
    // 0x1fbc7c: 0xac8217a8  sw          $v0, 0x17A8($a0)
    ctx->pc = 0x1fbc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6056), GPR_U32(ctx, 2));
label_1fbc80:
    // 0x1fbc80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbc80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbc84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fbc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fbc88: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC88u;
        // 0x1fbc8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBC90u;
}
