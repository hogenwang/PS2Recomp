#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028F498
// Address: 0x28f498 - 0x28f4e0
void sub_0028F498_0x28f498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F498_0x28f498");
#endif

    switch (ctx->pc) {
        case 0x28f498u: goto label_28f498;
        case 0x28f49cu: goto label_28f49c;
        case 0x28f4a0u: goto label_28f4a0;
        case 0x28f4a4u: goto label_28f4a4;
        case 0x28f4a8u: goto label_28f4a8;
        case 0x28f4acu: goto label_28f4ac;
        case 0x28f4b0u: goto label_28f4b0;
        case 0x28f4b4u: goto label_28f4b4;
        case 0x28f4b8u: goto label_28f4b8;
        case 0x28f4bcu: goto label_28f4bc;
        case 0x28f4c0u: goto label_28f4c0;
        case 0x28f4c4u: goto label_28f4c4;
        case 0x28f4c8u: goto label_28f4c8;
        case 0x28f4ccu: goto label_28f4cc;
        case 0x28f4d0u: goto label_28f4d0;
        case 0x28f4d4u: goto label_28f4d4;
        case 0x28f4d8u: goto label_28f4d8;
        case 0x28f4dcu: goto label_28f4dc;
        default: break;
    }

    ctx->pc = 0x28f498u;

label_28f498:
    // 0x28f498: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f49c:
    // 0x28f49c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f49cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f4a0:
    // 0x28f4a0: 0x8c424694  lw          $v0, 0x4694($v0)
    ctx->pc = 0x28f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18068)));
label_28f4a4:
    // 0x28f4a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f4a8:
    if (ctx->pc == 0x28F4A8u) {
        ctx->pc = 0x28F4A8u;
            // 0x28f4a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28F4ACu;
        goto label_28f4ac;
    }
    ctx->pc = 0x28F4A4u;
    {
        const bool branch_taken_0x28f4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4A4u;
            // 0x28f4a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4a4) {
            ctx->pc = 0x28F4CCu;
            goto label_28f4cc;
        }
    }
    ctx->pc = 0x28F4ACu;
label_28f4ac:
    // 0x28f4ac: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f4b0:
    // 0x28f4b0: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x28f4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_28f4b4:
    // 0x28f4b4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f4b8:
    // 0x28f4b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f4b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f4bc:
    // 0x28f4bc: 0xc0a5648  jal         func_295920
label_28f4c0:
    if (ctx->pc == 0x28F4C0u) {
        ctx->pc = 0x28F4C0u;
            // 0x28f4c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F4C4u;
        goto label_28f4c4;
    }
    ctx->pc = 0x28F4BCu;
    SET_GPR_U32(ctx, 31, 0x28F4C4u);
    ctx->pc = 0x28F4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4BCu;
            // 0x28f4c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F4C4u; }
        if (ctx->pc != 0x28F4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F4C4u; }
        if (ctx->pc != 0x28F4C4u) { return; }
    }
    ctx->pc = 0x28F4C4u;
label_28f4c4:
    // 0x28f4c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f4c8:
    if (ctx->pc == 0x28F4C8u) {
        ctx->pc = 0x28F4C8u;
            // 0x28f4c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F4CCu;
        goto label_28f4cc;
    }
    ctx->pc = 0x28F4C4u;
    {
        const bool branch_taken_0x28f4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4C4u;
            // 0x28f4c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4c4) {
            ctx->pc = 0x28F4D4u;
            goto label_28f4d4;
        }
    }
    ctx->pc = 0x28F4CCu;
label_28f4cc:
    // 0x28f4cc: 0x40f809  jalr        $v0
label_28f4d0:
    if (ctx->pc == 0x28F4D0u) {
        ctx->pc = 0x28F4D4u;
        goto label_28f4d4;
    }
    ctx->pc = 0x28F4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F4D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28F4D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28F4D4u; }
            if (ctx->pc != 0x28F4D4u) { return; }
        }
        }
    }
    ctx->pc = 0x28F4D4u;
label_28f4d4:
    // 0x28f4d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f4d8:
    // 0x28f4d8: 0x3e00008  jr          $ra
label_28f4dc:
    if (ctx->pc == 0x28F4DCu) {
        ctx->pc = 0x28F4DCu;
            // 0x28f4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28F4E0u;
        goto label_fallthrough_0x28f4d8;
    }
    ctx->pc = 0x28F4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4D8u;
            // 0x28f4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28f4d8:
    ctx->pc = 0x28F4E0u;
    ctx->pc = 0x28f4e0u;
}
