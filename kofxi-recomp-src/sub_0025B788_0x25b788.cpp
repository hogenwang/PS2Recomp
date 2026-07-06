#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025B788
// Address: 0x25b788 - 0x25b840
void sub_0025B788_0x25b788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B788_0x25b788");
#endif

    switch (ctx->pc) {
        case 0x25b7c4u: goto label_25b7c4;
        case 0x25b7f4u: goto label_25b7f4;
        case 0x25b804u: goto label_25b804;
        case 0x25b80cu: goto label_25b80c;
        case 0x25b814u: goto label_25b814;
        case 0x25b828u: goto label_25b828;
        default: break;
    }

    ctx->pc = 0x25b788u;

    // 0x25b788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b78c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25b78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25b790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25b790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25b794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25b794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25b798: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b79c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x25b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25b7a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25B7A0u;
    {
        const bool branch_taken_0x25b7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B7A0u;
            // 0x25b7a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b7a0) {
            ctx->pc = 0x25B7ACu;
            goto label_25b7ac;
        }
    }
    ctx->pc = 0x25B7A8u;
    // 0x25b7a8: 0x8c51001c  lw          $s1, 0x1C($v0)
    ctx->pc = 0x25b7a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_25b7ac:
    // 0x25b7ac: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x25b7acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25b7b0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x25b7b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25b7b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B7B4u;
    {
        const bool branch_taken_0x25b7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b7b4) {
            ctx->pc = 0x25B7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25B7B4u;
            // 0x25b7b8: 0xde220000  ld          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25B7CCu;
            goto label_25b7cc;
        }
    }
    ctx->pc = 0x25B7BCu;
    // 0x25b7bc: 0xc0966a2  jal         func_259A88
    ctx->pc = 0x25B7BCu;
    SET_GPR_U32(ctx, 31, 0x25B7C4u);
    ctx->pc = 0x25B7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B7BCu;
            // 0x25b7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A88u;
    if (runtime->hasFunction(0x259A88u)) {
        auto targetFn = runtime->lookupFunction(0x259A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B7C4u; }
        if (ctx->pc != 0x25B7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00259A88_0x259a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B7C4u; }
        if (ctx->pc != 0x25B7C4u) { return; }
    }
    ctx->pc = 0x25B7C4u;
label_25b7c4:
    // 0x25b7c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25B7C4u;
    {
        const bool branch_taken_0x25b7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B7C4u;
            // 0x25b7c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b7c4) {
            ctx->pc = 0x25B828u;
            goto label_25b828;
        }
    }
    ctx->pc = 0x25B7CCu;
label_25b7cc:
    // 0x25b7cc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x25b7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25b7d0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x25b7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x25b7d4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x25b7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x25b7d8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x25b7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x25b7dc: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x25b7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x25b7e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25b7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25b7e4: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B7E4u;
    {
        const bool branch_taken_0x25b7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x25B7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B7E4u;
            // 0x25b7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b7e4) {
            ctx->pc = 0x25B7FCu;
            goto label_25b7fc;
        }
    }
    ctx->pc = 0x25B7ECu;
    // 0x25b7ec: 0xc096678  jal         func_2599E0
    ctx->pc = 0x25B7ECu;
    SET_GPR_U32(ctx, 31, 0x25B7F4u);
    ctx->pc = 0x25B7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B7ECu;
            // 0x25b7f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2599E0u;
    if (runtime->hasFunction(0x2599E0u)) {
        auto targetFn = runtime->lookupFunction(0x2599E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B7F4u; }
        if (ctx->pc != 0x25B7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002599E0_0x2599e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B7F4u; }
        if (ctx->pc != 0x25B7F4u) { return; }
    }
    ctx->pc = 0x25B7F4u;
label_25b7f4:
    // 0x25b7f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25B7F4u;
    {
        const bool branch_taken_0x25b7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B7F4u;
            // 0x25b7f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b7f4) {
            ctx->pc = 0x25B828u;
            goto label_25b828;
        }
    }
    ctx->pc = 0x25B7FCu;
label_25b7fc:
    // 0x25b7fc: 0xc08c122  jal         func_230488
    ctx->pc = 0x25B7FCu;
    SET_GPR_U32(ctx, 31, 0x25B804u);
    ctx->pc = 0x25B800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B7FCu;
            // 0x25b800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230488u;
    if (runtime->hasFunction(0x230488u)) {
        auto targetFn = runtime->lookupFunction(0x230488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B804u; }
        if (ctx->pc != 0x25B804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230488_0x230488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B804u; }
        if (ctx->pc != 0x25B804u) { return; }
    }
    ctx->pc = 0x25B804u;
label_25b804:
    // 0x25b804: 0xc08c4c6  jal         func_231318
    ctx->pc = 0x25B804u;
    SET_GPR_U32(ctx, 31, 0x25B80Cu);
    ctx->pc = 0x25B808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B804u;
            // 0x25b808: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231318u;
    if (runtime->hasFunction(0x231318u)) {
        auto targetFn = runtime->lookupFunction(0x231318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B80Cu; }
        if (ctx->pc != 0x25B80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231318_0x231318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B80Cu; }
        if (ctx->pc != 0x25B80Cu) { return; }
    }
    ctx->pc = 0x25B80Cu;
label_25b80c:
    // 0x25b80c: 0xc096e10  jal         func_25B840
    ctx->pc = 0x25B80Cu;
    SET_GPR_U32(ctx, 31, 0x25B814u);
    ctx->pc = 0x25B810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B80Cu;
            // 0x25b810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B840u;
    if (runtime->hasFunction(0x25B840u)) {
        auto targetFn = runtime->lookupFunction(0x25B840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B814u; }
        if (ctx->pc != 0x25B814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B840_0x25b840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B814u; }
        if (ctx->pc != 0x25B814u) { return; }
    }
    ctx->pc = 0x25B814u;
label_25b814:
    // 0x25b814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25b814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b818: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B818u;
    {
        const bool branch_taken_0x25b818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B818u;
            // 0x25b81c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b818) {
            ctx->pc = 0x25B82Cu;
            goto label_25b82c;
        }
    }
    ctx->pc = 0x25B820u;
    // 0x25b820: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x25B820u;
    SET_GPR_U32(ctx, 31, 0x25B828u);
    ctx->pc = 0x25B824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B820u;
            // 0x25b824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (runtime->hasFunction(0x257EE0u)) {
        auto targetFn = runtime->lookupFunction(0x257EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B828u; }
        if (ctx->pc != 0x25B828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257EE0_0x257ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B828u; }
        if (ctx->pc != 0x25B828u) { return; }
    }
    ctx->pc = 0x25B828u;
label_25b828:
    // 0x25b828: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25b82c:
    // 0x25b82c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25b82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b830: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25b830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25b834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b838: 0x3e00008  jr          $ra
    ctx->pc = 0x25B838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B838u;
            // 0x25b83c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B840u;
    ctx->pc = 0x25b840u;
}
