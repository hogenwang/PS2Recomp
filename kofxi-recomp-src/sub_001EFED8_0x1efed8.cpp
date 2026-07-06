#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EFED8
// Address: 0x1efed8 - 0x1eff60
void sub_001EFED8_0x1efed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFED8_0x1efed8");
#endif

    switch (ctx->pc) {
        case 0x1eff20u: goto label_1eff20;
        case 0x1eff34u: goto label_1eff34;
        default: break;
    }

    ctx->pc = 0x1efed8u;

    // 0x1efed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1efed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1efedc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1efedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1efee0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1efee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1efee4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1efee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1efee8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1efee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1efeec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1efeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1efef0: 0x8c832018  lw          $v1, 0x2018($a0)
    ctx->pc = 0x1efef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1efef4: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x1efef4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1efef8: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EFEF8u;
    {
        const bool branch_taken_0x1efef8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFEF8u;
            // 0x1efefc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efef8) {
            ctx->pc = 0x1EFF44u;
            goto label_1eff44;
        }
    }
    ctx->pc = 0x1EFF00u;
    // 0x1eff00: 0x68082  srl         $s0, $a2, 2
    ctx->pc = 0x1eff00u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x1eff04: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1eff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eff08: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x1eff08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1eff0c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1eff0cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1eff10: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EFF10u;
    {
        const bool branch_taken_0x1eff10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF10u;
            // 0x1eff14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff10) {
            ctx->pc = 0x1EFF40u;
            goto label_1eff40;
        }
    }
    ctx->pc = 0x1EFF18u;
    // 0x1eff18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1eff18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eff1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eff20:
    // 0x1eff20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1eff20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1eff24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1eff24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff28: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1eff28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1eff2c: 0xc0770c0  jal         func_1DC300
    ctx->pc = 0x1EFF2Cu;
    SET_GPR_U32(ctx, 31, 0x1EFF34u);
    ctx->pc = 0x1EFF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF2Cu;
            // 0x1eff30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFF34u; }
        if (ctx->pc != 0x1EFF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFF34u; }
        if (ctx->pc != 0x1EFF34u) { return; }
    }
    ctx->pc = 0x1EFF34u;
label_1eff34:
    // 0x1eff34: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x1eff34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1eff38: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EFF38u;
    {
        const bool branch_taken_0x1eff38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF38u;
            // 0x1eff3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff38) {
            ctx->pc = 0x1EFF20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eff20;
        }
    }
    ctx->pc = 0x1EFF40u;
label_1eff40:
    // 0x1eff40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1eff40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eff44:
    // 0x1eff44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eff44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eff48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eff48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eff4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eff4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eff50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1eff50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eff54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eff54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eff58: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF58u;
            // 0x1eff5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFF60u;
    ctx->pc = 0x1eff60u;
}
