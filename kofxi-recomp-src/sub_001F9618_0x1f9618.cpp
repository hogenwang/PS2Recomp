#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9618
// Address: 0x1f9618 - 0x1f96a0
void sub_001F9618_0x1f9618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9618_0x1f9618");
#endif

    switch (ctx->pc) {
        case 0x1f9634u: goto label_1f9634;
        case 0x1f963cu: goto label_1f963c;
        case 0x1f9664u: goto label_1f9664;
        case 0x1f966cu: goto label_1f966c;
        case 0x1f9678u: goto label_1f9678;
        default: break;
    }

    ctx->pc = 0x1f9618u;

    // 0x1f9618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f961c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f961cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f962c: 0xc07f446  jal         func_1FD118
    ctx->pc = 0x1F962Cu;
    SET_GPR_U32(ctx, 31, 0x1F9634u);
    ctx->pc = 0x1F9630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F962Cu;
            // 0x1f9630: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD118u;
    if (runtime->hasFunction(0x1FD118u)) {
        auto targetFn = runtime->lookupFunction(0x1FD118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9634u; }
        if (ctx->pc != 0x1F9634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD118_0x1fd118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9634u; }
        if (ctx->pc != 0x1F9634u) { return; }
    }
    ctx->pc = 0x1F9634u;
label_1f9634:
    // 0x1f9634: 0xc07f470  jal         func_1FD1C0
    ctx->pc = 0x1F9634u;
    SET_GPR_U32(ctx, 31, 0x1F963Cu);
    ctx->pc = 0x1F9638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9634u;
            // 0x1f9638: 0xfe0237e0  sd          $v0, 0x37E0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 14304), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1C0u;
    if (runtime->hasFunction(0x1FD1C0u)) {
        auto targetFn = runtime->lookupFunction(0x1FD1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F963Cu; }
        if (ctx->pc != 0x1F963Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD1C0_0x1fd1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F963Cu; }
        if (ctx->pc != 0x1F963Cu) { return; }
    }
    ctx->pc = 0x1F963Cu;
label_1f963c:
    // 0x1f963c: 0x8e060968  lw          $a2, 0x968($s0)
    ctx->pc = 0x1f963cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x1f9640: 0xde0437e0  ld          $a0, 0x37E0($s0)
    ctx->pc = 0x1f9640u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 14304)));
    // 0x1f9644: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f9644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9648: 0xde0337d8  ld          $v1, 0x37D8($s0)
    ctx->pc = 0x1f9648u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 14296)));
    // 0x1f964c: 0xae0637f0  sw          $a2, 0x37F0($s0)
    ctx->pc = 0x1f964cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14320), GPR_U32(ctx, 6));
    // 0x1f9650: 0x83882f  dsubu       $s1, $a0, $v1
    ctx->pc = 0x1f9650u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x1f9654: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F9654u;
    {
        const bool branch_taken_0x1f9654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9654u;
            // 0x1f9658: 0xfe0237e8  sd          $v0, 0x37E8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 14312), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9654) {
            ctx->pc = 0x1F9688u;
            goto label_1f9688;
        }
    }
    ctx->pc = 0x1F965Cu;
    // 0x1f965c: 0xc048082  jal         func_120208
    ctx->pc = 0x1F965Cu;
    SET_GPR_U32(ctx, 31, 0x1F9664u);
    ctx->pc = 0x1F9660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F965Cu;
            // 0x1f9660: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9664u; }
        if (ctx->pc != 0x1F9664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9664u; }
        if (ctx->pc != 0x1F9664u) { return; }
    }
    ctx->pc = 0x1F9664u;
label_1f9664:
    // 0x1f9664: 0xc0480bc  jal         func_1202F0
    ctx->pc = 0x1F9664u;
    SET_GPR_U32(ctx, 31, 0x1F966Cu);
    ctx->pc = 0x1F9668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9664u;
            // 0x1f9668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1202F0u;
    if (runtime->hasFunction(0x1202F0u)) {
        auto targetFn = runtime->lookupFunction(0x1202F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F966Cu; }
        if (ctx->pc != 0x1F966Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001202F0_0x1202f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F966Cu; }
        if (ctx->pc != 0x1F966Cu) { return; }
    }
    ctx->pc = 0x1F966Cu;
label_1f966c:
    // 0x1f966c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9670: 0xc0480bc  jal         func_1202F0
    ctx->pc = 0x1F9670u;
    SET_GPR_U32(ctx, 31, 0x1F9678u);
    ctx->pc = 0x1F9674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9670u;
            // 0x1f9674: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1202F0u;
    if (runtime->hasFunction(0x1202F0u)) {
        auto targetFn = runtime->lookupFunction(0x1202F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9678u; }
        if (ctx->pc != 0x1F9678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001202F0_0x1202f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9678u; }
        if (ctx->pc != 0x1F9678u) { return; }
    }
    ctx->pc = 0x1F9678u;
label_1f9678:
    // 0x1f9678: 0x0  nop
    ctx->pc = 0x1f9678u;
    // NOP
    // 0x1f967c: 0x0  nop
    ctx->pc = 0x1f967cu;
    // NOP
    // 0x1f9680: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1f9680u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x1f9684: 0xe61437f4  swc1        $f20, 0x37F4($s0)
    ctx->pc = 0x1f9684u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 14324), bits); }
label_1f9688:
    // 0x1f9688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f968c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f968cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9694: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1f9694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f9698: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9698u;
            // 0x1f969c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F96A0u;
    ctx->pc = 0x1f96a0u;
}
