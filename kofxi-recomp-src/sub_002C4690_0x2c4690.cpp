#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4690
// Address: 0x2c4690 - 0x2c46f8
void sub_002C4690_0x2c4690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4690_0x2c4690");
#endif

    switch (ctx->pc) {
        case 0x2c4690u: goto label_2c4690;
        case 0x2c4694u: goto label_2c4694;
        case 0x2c4698u: goto label_2c4698;
        case 0x2c469cu: goto label_2c469c;
        case 0x2c46a0u: goto label_2c46a0;
        case 0x2c46a4u: goto label_2c46a4;
        case 0x2c46a8u: goto label_2c46a8;
        case 0x2c46acu: goto label_2c46ac;
        case 0x2c46b0u: goto label_2c46b0;
        case 0x2c46b4u: goto label_2c46b4;
        case 0x2c46b8u: goto label_2c46b8;
        case 0x2c46bcu: goto label_2c46bc;
        case 0x2c46c0u: goto label_2c46c0;
        case 0x2c46c4u: goto label_2c46c4;
        case 0x2c46c8u: goto label_2c46c8;
        case 0x2c46ccu: goto label_2c46cc;
        case 0x2c46d0u: goto label_2c46d0;
        case 0x2c46d4u: goto label_2c46d4;
        case 0x2c46d8u: goto label_2c46d8;
        case 0x2c46dcu: goto label_2c46dc;
        case 0x2c46e0u: goto label_2c46e0;
        case 0x2c46e4u: goto label_2c46e4;
        case 0x2c46e8u: goto label_2c46e8;
        case 0x2c46ecu: goto label_2c46ec;
        case 0x2c46f0u: goto label_2c46f0;
        case 0x2c46f4u: goto label_2c46f4;
        default: break;
    }

    ctx->pc = 0x2c4690u;

label_2c4690:
    // 0x2c4690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c4694:
    // 0x2c4694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c4694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c4698:
    // 0x2c4698: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c469c:
    // 0x2c469c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_2c46a0:
    if (ctx->pc == 0x2C46A0u) {
        ctx->pc = 0x2C46A0u;
            // 0x2c46a0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x2C46A4u;
        goto label_2c46a4;
    }
    ctx->pc = 0x2C469Cu;
    {
        const bool branch_taken_0x2c469c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C46A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C469Cu;
            // 0x2c46a0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c469c) {
            ctx->pc = 0x2C46E8u;
            goto label_2c46e8;
        }
    }
    ctx->pc = 0x2C46A4u;
label_2c46a4:
    // 0x2c46a4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2c46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2c46a8:
    // 0x2c46a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c46ac:
    if (ctx->pc == 0x2C46ACu) {
        ctx->pc = 0x2C46B0u;
        goto label_2c46b0;
    }
    ctx->pc = 0x2C46A8u;
    {
        const bool branch_taken_0x2c46a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c46a8) {
            ctx->pc = 0x2C46C4u;
            goto label_2c46c4;
        }
    }
    ctx->pc = 0x2C46B0u;
label_2c46b0:
    // 0x2c46b0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2c46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2c46b4:
    // 0x2c46b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2c46b8:
    if (ctx->pc == 0x2C46B8u) {
        ctx->pc = 0x2C46BCu;
        goto label_2c46bc;
    }
    ctx->pc = 0x2C46B4u;
    {
        const bool branch_taken_0x2c46b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c46b4) {
            ctx->pc = 0x2C46C4u;
            goto label_2c46c4;
        }
    }
    ctx->pc = 0x2C46BCu;
label_2c46bc:
    // 0x2c46bc: 0x40f809  jalr        $v0
label_2c46c0:
    if (ctx->pc == 0x2C46C0u) {
        ctx->pc = 0x2C46C4u;
        goto label_2c46c4;
    }
    ctx->pc = 0x2C46BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C46C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C46C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C46C4u; }
            if (ctx->pc != 0x2C46C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C46C4u;
label_2c46c4:
    // 0x2c46c4: 0xc0a03b6  jal         func_280ED8
label_2c46c8:
    if (ctx->pc == 0x2C46C8u) {
        ctx->pc = 0x2C46C8u;
            // 0x2c46c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2C46CCu;
        goto label_2c46cc;
    }
    ctx->pc = 0x2C46C4u;
    SET_GPR_U32(ctx, 31, 0x2C46CCu);
    ctx->pc = 0x2C46C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C46C4u;
            // 0x2c46c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280ED8u;
    if (runtime->hasFunction(0x280ED8u)) {
        auto targetFn = runtime->lookupFunction(0x280ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46CCu; }
        if (ctx->pc != 0x2C46CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280ED8_0x280ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46CCu; }
        if (ctx->pc != 0x2C46CCu) { return; }
    }
    ctx->pc = 0x2C46CCu;
label_2c46cc:
    // 0x2c46cc: 0xc0a070c  jal         func_281C30
label_2c46d0:
    if (ctx->pc == 0x2C46D0u) {
        ctx->pc = 0x2C46D0u;
            // 0x2c46d0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x2C46D4u;
        goto label_2c46d4;
    }
    ctx->pc = 0x2C46CCu;
    SET_GPR_U32(ctx, 31, 0x2C46D4u);
    ctx->pc = 0x2C46D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C46CCu;
            // 0x2c46d0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46D4u; }
        if (ctx->pc != 0x2C46D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46D4u; }
        if (ctx->pc != 0x2C46D4u) { return; }
    }
    ctx->pc = 0x2C46D4u;
label_2c46d4:
    // 0x2c46d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c46d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c46d8:
    // 0x2c46d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c46d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c46dc:
    // 0x2c46dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c46dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c46e0:
    // 0x2c46e0: 0x80a8c0a  j           func_2A3028
label_2c46e4:
    if (ctx->pc == 0x2C46E4u) {
        ctx->pc = 0x2C46E4u;
            // 0x2c46e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C46E8u;
        goto label_2c46e8;
    }
    ctx->pc = 0x2C46E0u;
    ctx->pc = 0x2C46E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C46E0u;
            // 0x2c46e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C46E8u;
label_2c46e8:
    // 0x2c46e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c46e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c46ec:
    // 0x2c46ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c46ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c46f0:
    // 0x2c46f0: 0x3e00008  jr          $ra
label_2c46f4:
    if (ctx->pc == 0x2C46F4u) {
        ctx->pc = 0x2C46F4u;
            // 0x2c46f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C46F8u;
        goto label_fallthrough_0x2c46f0;
    }
    ctx->pc = 0x2C46F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C46F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C46F0u;
            // 0x2c46f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c46f0:
    ctx->pc = 0x2C46F8u;
    ctx->pc = 0x2c46f8u;
}
