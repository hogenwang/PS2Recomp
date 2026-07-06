#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B0218
// Address: 0x2b0218 - 0x2b0278
void sub_002B0218_0x2b0218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0218_0x2b0218");
#endif

    switch (ctx->pc) {
        case 0x2b0218u: goto label_2b0218;
        case 0x2b021cu: goto label_2b021c;
        case 0x2b0220u: goto label_2b0220;
        case 0x2b0224u: goto label_2b0224;
        case 0x2b0228u: goto label_2b0228;
        case 0x2b022cu: goto label_2b022c;
        case 0x2b0230u: goto label_2b0230;
        case 0x2b0234u: goto label_2b0234;
        case 0x2b0238u: goto label_2b0238;
        case 0x2b023cu: goto label_2b023c;
        case 0x2b0240u: goto label_2b0240;
        case 0x2b0244u: goto label_2b0244;
        case 0x2b0248u: goto label_2b0248;
        case 0x2b024cu: goto label_2b024c;
        case 0x2b0250u: goto label_2b0250;
        case 0x2b0254u: goto label_2b0254;
        case 0x2b0258u: goto label_2b0258;
        case 0x2b025cu: goto label_2b025c;
        case 0x2b0260u: goto label_2b0260;
        case 0x2b0264u: goto label_2b0264;
        case 0x2b0268u: goto label_2b0268;
        case 0x2b026cu: goto label_2b026c;
        case 0x2b0270u: goto label_2b0270;
        case 0x2b0274u: goto label_2b0274;
        default: break;
    }

    ctx->pc = 0x2b0218u;

label_2b0218:
    // 0x2b0218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b021c:
    // 0x2b021c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b021cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b0220:
    // 0x2b0220: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b0220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b0224:
    // 0x2b0224: 0xc0ac604  jal         func_2B1810
label_2b0228:
    if (ctx->pc == 0x2B0228u) {
        ctx->pc = 0x2B0228u;
            // 0x2b0228: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B022Cu;
        goto label_2b022c;
    }
    ctx->pc = 0x2B0224u;
    SET_GPR_U32(ctx, 31, 0x2B022Cu);
    ctx->pc = 0x2B0228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0224u;
            // 0x2b0228: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (runtime->hasFunction(0x2B1810u)) {
        auto targetFn = runtime->lookupFunction(0x2B1810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B022Cu; }
        if (ctx->pc != 0x2B022Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1810_0x2b1810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B022Cu; }
        if (ctx->pc != 0x2B022Cu) { return; }
    }
    ctx->pc = 0x2B022Cu;
label_2b022c:
    // 0x2b022c: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2b022cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
label_2b0230:
    // 0x2b0230: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b0234:
    if (ctx->pc == 0x2B0234u) {
        ctx->pc = 0x2B0234u;
            // 0x2b0234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0238u;
        goto label_2b0238;
    }
    ctx->pc = 0x2B0230u;
    {
        const bool branch_taken_0x2b0230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0230u;
            // 0x2b0234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0230) {
            ctx->pc = 0x2B024Cu;
            goto label_2b024c;
        }
    }
    ctx->pc = 0x2B0238u;
label_2b0238:
    // 0x2b0238: 0xc0ac604  jal         func_2B1810
label_2b023c:
    if (ctx->pc == 0x2B023Cu) {
        ctx->pc = 0x2B023Cu;
            // 0x2b023c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0240u;
        goto label_2b0240;
    }
    ctx->pc = 0x2B0238u;
    SET_GPR_U32(ctx, 31, 0x2B0240u);
    ctx->pc = 0x2B023Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0238u;
            // 0x2b023c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (runtime->hasFunction(0x2B1810u)) {
        auto targetFn = runtime->lookupFunction(0x2B1810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0240u; }
        if (ctx->pc != 0x2B0240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1810_0x2b1810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0240u; }
        if (ctx->pc != 0x2B0240u) { return; }
    }
    ctx->pc = 0x2B0240u;
label_2b0240:
    // 0x2b0240: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2b0240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_2b0244:
    // 0x2b0244: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b0248:
    if (ctx->pc == 0x2B0248u) {
        ctx->pc = 0x2B0248u;
            // 0x2b0248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B024Cu;
        goto label_2b024c;
    }
    ctx->pc = 0x2B0244u;
    {
        const bool branch_taken_0x2b0244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0244u;
            // 0x2b0248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0244) {
            ctx->pc = 0x2B0254u;
            goto label_2b0254;
        }
    }
    ctx->pc = 0x2B024Cu;
label_2b024c:
    // 0x2b024c: 0xc0abee6  jal         func_2AFB98
label_2b0250:
    if (ctx->pc == 0x2B0250u) {
        ctx->pc = 0x2B0250u;
            // 0x2b0250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0254u;
        goto label_2b0254;
    }
    ctx->pc = 0x2B024Cu;
    SET_GPR_U32(ctx, 31, 0x2B0254u);
    ctx->pc = 0x2B0250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B024Cu;
            // 0x2b0250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFB98u;
    if (runtime->hasFunction(0x2AFB98u)) {
        auto targetFn = runtime->lookupFunction(0x2AFB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0254u; }
        if (ctx->pc != 0x2B0254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AFB98_0x2afb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0254u; }
        if (ctx->pc != 0x2B0254u) { return; }
    }
    ctx->pc = 0x2B0254u;
label_2b0254:
    // 0x2b0254: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2b0254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b0258:
    // 0x2b0258: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2b0258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2b025c:
    // 0x2b025c: 0x40f809  jalr        $v0
label_2b0260:
    if (ctx->pc == 0x2B0260u) {
        ctx->pc = 0x2B0260u;
            // 0x2b0260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0264u;
        goto label_2b0264;
    }
    ctx->pc = 0x2B025Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0264u);
        ctx->pc = 0x2B0260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B025Cu;
            // 0x2b0260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B0264u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B0264u; }
            if (ctx->pc != 0x2B0264u) { return; }
        }
        }
    }
    ctx->pc = 0x2B0264u;
label_2b0264:
    // 0x2b0264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b0264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0268:
    // 0x2b0268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b026c:
    // 0x2b026c: 0x3e00008  jr          $ra
label_2b0270:
    if (ctx->pc == 0x2B0270u) {
        ctx->pc = 0x2B0270u;
            // 0x2b0270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2B0274u;
        goto label_2b0274;
    }
    ctx->pc = 0x2B026Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B026Cu;
            // 0x2b0270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B0274u;
label_2b0274:
    // 0x2b0274: 0x0  nop
    ctx->pc = 0x2b0274u;
    // NOP
    ctx->pc = 0x2b0278u;
}
