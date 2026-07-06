#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7220
// Address: 0x1f7220 - 0x1f72b0
void sub_001F7220_0x1f7220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7220_0x1f7220");
#endif

    switch (ctx->pc) {
        case 0x1f7254u: goto label_1f7254;
        case 0x1f7288u: goto label_1f7288;
        case 0x1f72a4u: goto label_1f72a4;
        default: break;
    }

    ctx->pc = 0x1f7220u;

    // 0x1f7220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7224: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f7224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f722c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f722cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f7230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f7234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f7238: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1f7238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1f723c: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x1f723cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1f7240: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x1f7240u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7244: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7244u;
    {
        const bool branch_taken_0x1f7244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7244u;
            // 0x1f7248: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7244) {
            ctx->pc = 0x1F7270u;
            goto label_1f7270;
        }
    }
    ctx->pc = 0x1F724Cu;
    // 0x1f724c: 0xc07f252  jal         func_1FC948
    ctx->pc = 0x1F724Cu;
    SET_GPR_U32(ctx, 31, 0x1F7254u);
    ctx->pc = 0x1FC948u;
    if (runtime->hasFunction(0x1FC948u)) {
        auto targetFn = runtime->lookupFunction(0x1FC948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7254u; }
        if (ctx->pc != 0x1F7254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC948_0x1fc948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7254u; }
        if (ctx->pc != 0x1F7254u) { return; }
    }
    ctx->pc = 0x1F7254u;
label_1f7254:
    // 0x1f7254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7258: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f7258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f725c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f725cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f7264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7268: 0x807dca2  j           func_1F7288
    ctx->pc = 0x1F7268u;
    ctx->pc = 0x1F726Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7268u;
            // 0x1f726c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7288u;
    goto label_1f7288;
    ctx->pc = 0x1F7270u;
label_1f7270:
    // 0x1f7270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7274: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f7274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f7278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f727c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F727Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F727Cu;
            // 0x1f7280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7284u;
    // 0x1f7284: 0x0  nop
    ctx->pc = 0x1f7284u;
    // NOP
label_1f7288:
    // 0x1f7288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f728c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f728cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7290: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1f7290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f7294: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f729c: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1F729Cu;
    SET_GPR_U32(ctx, 31, 0x1F72A4u);
    ctx->pc = 0x1F72A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F729Cu;
            // 0x1f72a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (runtime->hasFunction(0x1FD988u)) {
        auto targetFn = runtime->lookupFunction(0x1FD988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F72A4u; }
        if (ctx->pc != 0x1F72A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD988_0x1fd988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F72A4u; }
        if (ctx->pc != 0x1F72A4u) { return; }
    }
    ctx->pc = 0x1F72A4u;
label_1f72a4:
    // 0x1f72a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f72a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f72a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F72A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F72ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F72A8u;
            // 0x1f72ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F72B0u;
    ctx->pc = 0x1f72b0u;
}
