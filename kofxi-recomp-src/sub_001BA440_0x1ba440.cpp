#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA440
// Address: 0x1ba440 - 0x1ba4d8
void sub_001BA440_0x1ba440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA440_0x1ba440");
#endif

    switch (ctx->pc) {
        case 0x1ba460u: goto label_1ba460;
        case 0x1ba478u: goto label_1ba478;
        case 0x1ba4a4u: goto label_1ba4a4;
        case 0x1ba4b8u: goto label_1ba4b8;
        default: break;
    }

    ctx->pc = 0x1ba440u;

    // 0x1ba440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba444: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA444u;
    {
        const bool branch_taken_0x1ba444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA444u;
            // 0x1ba448: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba444) {
            ctx->pc = 0x1BA460u;
            goto label_1ba460;
        }
    }
    ctx->pc = 0x1BA44Cu;
    // 0x1ba44c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ba44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ba450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba454: 0x24848388  addiu       $a0, $a0, -0x7C78
    ctx->pc = 0x1ba454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935432));
    // 0x1ba458: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BA458u;
    ctx->pc = 0x1BA45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA458u;
            // 0x1ba45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BA460u;
label_1ba460:
    // 0x1ba460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba464: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ba464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1ba468: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x1ba468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x1ba46c: 0xac45c370  sw          $a1, -0x3C90($v0)
    ctx->pc = 0x1ba46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951792), GPR_U32(ctx, 5));
    // 0x1ba470: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA470u;
            // 0x1ba474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA478u;
label_1ba478:
    // 0x1ba478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ba47c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ba488: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ba488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba48c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ba48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ba490: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ba490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba494: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1ba494u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ba498: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ba498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ba49c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BA49Cu;
    SET_GPR_U32(ctx, 31, 0x1BA4A4u);
    ctx->pc = 0x1BA4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA49Cu;
            // 0x1ba4a0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4A4u; }
        if (ctx->pc != 0x1BA4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4A4u; }
        if (ctx->pc != 0x1BA4A4u) { return; }
    }
    ctx->pc = 0x1BA4A4u;
label_1ba4a4:
    // 0x1ba4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba4a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ba4a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ba4ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ba4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba4b0: 0xc06e936  jal         func_1BA4D8
    ctx->pc = 0x1BA4B0u;
    SET_GPR_U32(ctx, 31, 0x1BA4B8u);
    ctx->pc = 0x1BA4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4B0u;
            // 0x1ba4b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA4D8u;
    if (runtime->hasFunction(0x1BA4D8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA4D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4B8u; }
        if (ctx->pc != 0x1BA4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA4D8_0x1ba4d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4B8u; }
        if (ctx->pc != 0x1BA4B8u) { return; }
    }
    ctx->pc = 0x1BA4B8u;
label_1ba4b8:
    // 0x1ba4b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba4bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba4bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba4c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ba4c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba4c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ba4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ba4c8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ba4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ba4cc: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BA4CCu;
    ctx->pc = 0x1BA4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4CCu;
            // 0x1ba4d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BA4D4u;
    // 0x1ba4d4: 0x0  nop
    ctx->pc = 0x1ba4d4u;
    // NOP
    ctx->pc = 0x1ba4d8u;
}
