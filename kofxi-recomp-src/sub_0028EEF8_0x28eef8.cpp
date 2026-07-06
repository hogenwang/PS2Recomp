#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028EEF8
// Address: 0x28eef8 - 0x28ef40
void sub_0028EEF8_0x28eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EEF8_0x28eef8");
#endif

    switch (ctx->pc) {
        case 0x28eef8u: goto label_28eef8;
        case 0x28eefcu: goto label_28eefc;
        case 0x28ef00u: goto label_28ef00;
        case 0x28ef04u: goto label_28ef04;
        case 0x28ef08u: goto label_28ef08;
        case 0x28ef0cu: goto label_28ef0c;
        case 0x28ef10u: goto label_28ef10;
        case 0x28ef14u: goto label_28ef14;
        case 0x28ef18u: goto label_28ef18;
        case 0x28ef1cu: goto label_28ef1c;
        case 0x28ef20u: goto label_28ef20;
        case 0x28ef24u: goto label_28ef24;
        case 0x28ef28u: goto label_28ef28;
        case 0x28ef2cu: goto label_28ef2c;
        case 0x28ef30u: goto label_28ef30;
        case 0x28ef34u: goto label_28ef34;
        case 0x28ef38u: goto label_28ef38;
        case 0x28ef3cu: goto label_28ef3c;
        default: break;
    }

    ctx->pc = 0x28eef8u;

label_28eef8:
    // 0x28eef8: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28eefc:
    // 0x28eefc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28eefcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28ef00:
    // 0x28ef00: 0x8c424640  lw          $v0, 0x4640($v0)
    ctx->pc = 0x28ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17984)));
label_28ef04:
    // 0x28ef04: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28ef08:
    if (ctx->pc == 0x28EF08u) {
        ctx->pc = 0x28EF08u;
            // 0x28ef08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28EF0Cu;
        goto label_28ef0c;
    }
    ctx->pc = 0x28EF04u;
    {
        const bool branch_taken_0x28ef04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF04u;
            // 0x28ef08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef04) {
            ctx->pc = 0x28EF2Cu;
            goto label_28ef2c;
        }
    }
    ctx->pc = 0x28EF0Cu;
label_28ef0c:
    // 0x28ef0c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28ef10:
    // 0x28ef10: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x28ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_28ef14:
    // 0x28ef14: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28ef14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28ef18:
    // 0x28ef18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ef18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ef1c:
    // 0x28ef1c: 0xc0a5648  jal         func_295920
label_28ef20:
    if (ctx->pc == 0x28EF20u) {
        ctx->pc = 0x28EF20u;
            // 0x28ef20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EF24u;
        goto label_28ef24;
    }
    ctx->pc = 0x28EF1Cu;
    SET_GPR_U32(ctx, 31, 0x28EF24u);
    ctx->pc = 0x28EF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF1Cu;
            // 0x28ef20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EF24u; }
        if (ctx->pc != 0x28EF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EF24u; }
        if (ctx->pc != 0x28EF24u) { return; }
    }
    ctx->pc = 0x28EF24u;
label_28ef24:
    // 0x28ef24: 0x10000003  b           . + 4 + (0x3 << 2)
label_28ef28:
    if (ctx->pc == 0x28EF28u) {
        ctx->pc = 0x28EF28u;
            // 0x28ef28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EF2Cu;
        goto label_28ef2c;
    }
    ctx->pc = 0x28EF24u;
    {
        const bool branch_taken_0x28ef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF24u;
            // 0x28ef28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef24) {
            ctx->pc = 0x28EF34u;
            goto label_28ef34;
        }
    }
    ctx->pc = 0x28EF2Cu;
label_28ef2c:
    // 0x28ef2c: 0x40f809  jalr        $v0
label_28ef30:
    if (ctx->pc == 0x28EF30u) {
        ctx->pc = 0x28EF34u;
        goto label_28ef34;
    }
    ctx->pc = 0x28EF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EF34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28EF34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28EF34u; }
            if (ctx->pc != 0x28EF34u) { return; }
        }
        }
    }
    ctx->pc = 0x28EF34u;
label_28ef34:
    // 0x28ef34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ef34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ef38:
    // 0x28ef38: 0x3e00008  jr          $ra
label_28ef3c:
    if (ctx->pc == 0x28EF3Cu) {
        ctx->pc = 0x28EF3Cu;
            // 0x28ef3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28EF40u;
        goto label_fallthrough_0x28ef38;
    }
    ctx->pc = 0x28EF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF38u;
            // 0x28ef3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28ef38:
    ctx->pc = 0x28EF40u;
    ctx->pc = 0x28ef40u;
}
