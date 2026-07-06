#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiThreadCreateWorker1
// Address: 0x1b3308 - 0x1b33c0
void kofxiThreadCreateWorker1_0x1b3308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadCreateWorker1_0x1b3308");
#endif

    switch (ctx->pc) {
        case 0x1b3364u: goto label_1b3364;
        case 0x1b338cu: goto label_1b338c;
        case 0x1b33a0u: goto label_1b33a0;
        case 0x1b33b0u: goto label_1b33b0;
        default: break;
    }

    ctx->pc = 0x1b3308u;

    // 0x1b3308: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b3308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b330c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b330cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b3310: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b3310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3314: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b3314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3318: 0x24422c40  addiu       $v0, $v0, 0x2C40
    ctx->pc = 0x1b3318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11328));
    // 0x1b331c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1b3320: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b3320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b3324: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1b3324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3328: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b3328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b332c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B332Cu;
    {
        const bool branch_taken_0x1b332c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B332Cu;
            // 0x1b3330: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b332c) {
            ctx->pc = 0x1B3350u;
            goto label_1b3350;
        }
    }
    ctx->pc = 0x1B3334u;
    // 0x1b3334: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b3334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b3338: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x1b3338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1b333c: 0x24423920  addiu       $v0, $v0, 0x3920
    ctx->pc = 0x1b333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14624));
    // 0x1b3340: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1b3340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1b3344: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3344u;
    {
        const bool branch_taken_0x1b3344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3344u;
            // 0x1b3348: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3344) {
            ctx->pc = 0x1B3364u;
            goto label_1b3364;
        }
    }
    ctx->pc = 0x1B334Cu;
    // 0x1b334c: 0x0  nop
    ctx->pc = 0x1b334cu;
    // NOP
label_1b3350:
    // 0x1b3350: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b3350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b3354: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1b3354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1b3358: 0x24847e20  addiu       $a0, $a0, 0x7E20
    ctx->pc = 0x1b3358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32288));
    // 0x1b335c: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1B335Cu;
    SET_GPR_U32(ctx, 31, 0x1B3364u);
    ctx->pc = 0x1B3360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B335Cu;
            // 0x1b3360: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3364u; }
        if (ctx->pc != 0x1B3364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3364u; }
        if (ctx->pc != 0x1B3364u) { return; }
    }
    ctx->pc = 0x1B3364u;
label_1b3364:
    // 0x1b3364: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1b3364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1b3368: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b3368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b336c: 0x8ca3a928  lw          $v1, -0x56D8($a1)
    ctx->pc = 0x1b336cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945064)));
    // 0x1b3370: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b3370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3374: 0x2442d6f0  addiu       $v0, $v0, -0x2910
    ctx->pc = 0x1b3374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956784));
    // 0x1b3378: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b3378u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b337c: 0x2610308c  addiu       $s0, $s0, 0x308C
    ctx->pc = 0x1b337cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12428));
    // 0x1b3380: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1b3380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1b3384: 0xc043298  jal         func_10CA60
    ctx->pc = 0x1B3384u;
    SET_GPR_U32(ctx, 31, 0x1B338Cu);
    ctx->pc = 0x1B3388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3384u;
            // 0x1b3388: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (runtime->hasFunction(0x10CA60u)) {
        auto targetFn = runtime->lookupFunction(0x10CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B338Cu; }
        if (ctx->pc != 0x1B338Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateThreadWrapper_0x10ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B338Cu; }
        if (ctx->pc != 0x1B338Cu) { return; }
    }
    ctx->pc = 0x1B338Cu;
label_1b338c:
    // 0x1b338c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b338cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b3390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3394: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b3394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3398: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x1B3398u;
    SET_GPR_U32(ctx, 31, 0x1B33A0u);
    ctx->pc = 0x1B339Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3398u;
            // 0x1b339c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (runtime->hasFunction(0x10DDA0u)) {
        auto targetFn = runtime->lookupFunction(0x10DDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33A0u; }
        if (ctx->pc != 0x1B33A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadStartWithContextInit_0x10dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33A0u; }
        if (ctx->pc != 0x1B33A0u) { return; }
    }
    ctx->pc = 0x1B33A0u;
label_1b33a0:
    // 0x1b33a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b33a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b33a4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b33a8: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B33A8u;
    SET_GPR_U32(ctx, 31, 0x1B33B0u);
    ctx->pc = 0x1B33ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B33A8u;
            // 0x1b33ac: 0x8c453008  lw          $a1, 0x3008($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33B0u; }
        if (ctx->pc != 0x1B33B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33B0u; }
        if (ctx->pc != 0x1B33B0u) { return; }
    }
    ctx->pc = 0x1B33B0u;
label_1b33b0:
    // 0x1b33b0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b33b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b33b4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b33b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b33b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B33B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B33BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B33B8u;
            // 0x1b33bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B33C0u;
    ctx->pc = 0x1b33c0u;
}
