#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiRunFrameScheduler
// Address: 0x1b40f0 - 0x1b45c8
void kofxiRunFrameScheduler_0x1b40f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiRunFrameScheduler_0x1b40f0");
#endif

    switch (ctx->pc) {
        case 0x1b4100u: goto label_1b4100;
        case 0x1b4108u: goto label_1b4108;
        case 0x1b4110u: goto label_1b4110;
        case 0x1b4118u: goto label_1b4118;
        case 0x1b4128u: goto label_1b4128;
        case 0x1b4168u: goto label_1b4168;
        case 0x1b4170u: goto label_1b4170;
        case 0x1b4188u: goto label_1b4188;
        case 0x1b41dcu: goto label_1b41dc;
        case 0x1b41e8u: goto label_1b41e8;
        case 0x1b4200u: goto label_1b4200;
        case 0x1b4214u: goto label_1b4214;
        case 0x1b4234u: goto label_1b4234;
        case 0x1b423cu: goto label_1b423c;
        case 0x1b4244u: goto label_1b4244;
        case 0x1b4258u: goto label_1b4258;
        case 0x1b4268u: goto label_1b4268;
        case 0x1b4280u: goto label_1b4280;
        case 0x1b4298u: goto label_1b4298;
        case 0x1b42d4u: goto label_1b42d4;
        case 0x1b42e4u: goto label_1b42e4;
        case 0x1b42f4u: goto label_1b42f4;
        case 0x1b43c4u: goto label_1b43c4;
        case 0x1b43dcu: goto label_1b43dc;
        case 0x1b43ecu: goto label_1b43ec;
        case 0x1b43f8u: goto label_1b43f8;
        case 0x1b4400u: goto label_1b4400;
        case 0x1b4408u: goto label_1b4408;
        case 0x1b4410u: goto label_1b4410;
        case 0x1b441cu: goto label_1b441c;
        case 0x1b4428u: goto label_1b4428;
        case 0x1b443cu: goto label_1b443c;
        case 0x1b4450u: goto label_1b4450;
        case 0x1b4488u: goto label_1b4488;
        case 0x1b44b0u: goto label_1b44b0;
        case 0x1b44b8u: goto label_1b44b8;
        case 0x1b44c0u: goto label_1b44c0;
        case 0x1b44c8u: goto label_1b44c8;
        case 0x1b44d0u: goto label_1b44d0;
        case 0x1b44d8u: goto label_1b44d8;
        case 0x1b44e0u: goto label_1b44e0;
        case 0x1b44f8u: goto label_1b44f8;
        case 0x1b4504u: goto label_1b4504;
        case 0x1b4510u: goto label_1b4510;
        case 0x1b4528u: goto label_1b4528;
        case 0x1b4538u: goto label_1b4538;
        case 0x1b4560u: goto label_1b4560;
        case 0x1b4588u: goto label_1b4588;
        case 0x1b45a0u: goto label_1b45a0;
        default: break;
    }

    ctx->pc = 0x1b40f0u;

label_1b40f0:
    // 0x1b40f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b40f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b40f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b40f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b40f8: 0xc073a2e  jal         func_1CE8B8
    ctx->pc = 0x1B40F8u;
    SET_GPR_U32(ctx, 31, 0x1B4100u);
    ctx->pc = 0x1CE8B8u;
    if (runtime->hasFunction(0x1CE8B8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4100u; }
        if (ctx->pc != 0x1B4100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE8B8_0x1ce8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4100u; }
        if (ctx->pc != 0x1B4100u) { return; }
    }
    ctx->pc = 0x1B4100u;
label_1b4100:
    // 0x1b4100: 0xc06cff0  jal         func_1B3FC0
    ctx->pc = 0x1B4100u;
    SET_GPR_U32(ctx, 31, 0x1B4108u);
    ctx->pc = 0x1B3FC0u;
    if (runtime->hasFunction(0x1B3FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4108u; }
        if (ctx->pc != 0x1B4108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiWorkerSchedulerTick_0x1b3fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4108u; }
        if (ctx->pc != 0x1B4108u) { return; }
    }
    ctx->pc = 0x1B4108u;
label_1b4108:
    // 0x1b4108: 0xc06d172  jal         func_1B45C8
    ctx->pc = 0x1B4108u;
    SET_GPR_U32(ctx, 31, 0x1B4110u);
    ctx->pc = 0x1B45C8u;
    if (runtime->hasFunction(0x1B45C8u)) {
        auto targetFn = runtime->lookupFunction(0x1B45C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4110u; }
        if (ctx->pc != 0x1B4110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDispatchFrameCallback_0x1b45c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4110u; }
        if (ctx->pc != 0x1B4110u) { return; }
    }
    ctx->pc = 0x1B4110u;
label_1b4110:
    // 0x1b4110: 0xc06d032  jal         func_1B40C8
    ctx->pc = 0x1B4110u;
    SET_GPR_U32(ctx, 31, 0x1B4118u);
    ctx->pc = 0x1B40C8u;
    if (runtime->hasFunction(0x1B40C8u)) {
        auto targetFn = runtime->lookupFunction(0x1B40C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4118u; }
        if (ctx->pc != 0x1B4118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiFrameSleepCurrent_0x1b40c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4118u; }
        if (ctx->pc != 0x1B4118u) { return; }
    }
    ctx->pc = 0x1B4118u;
label_1b4118:
    // 0x1b4118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b411c: 0x8073a3a  j           func_1CE8E8
    ctx->pc = 0x1B411Cu;
    ctx->pc = 0x1B4120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B411Cu;
            // 0x1b4120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE8E8u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B4124u;
    // 0x1b4124: 0x0  nop
    ctx->pc = 0x1b4124u;
    // NOP
label_1b4128:
    // 0x1b4128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b412c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4134: 0x806d03c  j           func_1B40F0
    ctx->pc = 0x1B4134u;
    ctx->pc = 0x1B4138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4134u;
            // 0x1b4138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B40F0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1b40f0;
    ctx->pc = 0x1B413Cu;
    // 0x1b413c: 0x0  nop
    ctx->pc = 0x1b413cu;
    // NOP
    // 0x1b4140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4144: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b4144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b4148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b414c: 0x24503108  addiu       $s0, $v0, 0x3108
    ctx->pc = 0x1b414cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12552));
    // 0x1b4150: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b4150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4154: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4154u;
    {
        const bool branch_taken_0x1b4154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4154u;
            // 0x1b4158: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4154) {
            ctx->pc = 0x1B4174u;
            goto label_1b4174;
        }
    }
    ctx->pc = 0x1B415Cu;
    // 0x1b415c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4160: 0xc06eab2  jal         func_1BAAC8
    ctx->pc = 0x1B4160u;
    SET_GPR_U32(ctx, 31, 0x1B4168u);
    ctx->pc = 0x1B4164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4160u;
            // 0x1b4164: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAAC8u;
    if (runtime->hasFunction(0x1BAAC8u)) {
        auto targetFn = runtime->lookupFunction(0x1BAAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4168u; }
        if (ctx->pc != 0x1B4168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAAC8_0x1baac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4168u; }
        if (ctx->pc != 0x1B4168u) { return; }
    }
    ctx->pc = 0x1B4168u;
label_1b4168:
    // 0x1b4168: 0xc06c6b8  jal         func_1B1AE0
    ctx->pc = 0x1B4168u;
    SET_GPR_U32(ctx, 31, 0x1B4170u);
    ctx->pc = 0x1B1AE0u;
    if (runtime->hasFunction(0x1B1AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4170u; }
        if (ctx->pc != 0x1B4170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AE0_0x1b1ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4170u; }
        if (ctx->pc != 0x1B4170u) { return; }
    }
    ctx->pc = 0x1B4170u;
label_1b4170:
    // 0x1b4170: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b4170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1b4174:
    // 0x1b4174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4178: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b417c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b417cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4180: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4180u;
            // 0x1b4184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4188u;
label_1b4188:
    // 0x1b4188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b418c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b418cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4190: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B4190u;
    {
        const bool branch_taken_0x1b4190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4190u;
            // 0x1b4194: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4190) {
            ctx->pc = 0x1B41D0u;
            goto label_1b41d0;
        }
    }
    ctx->pc = 0x1B4198u;
    // 0x1b4198: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1b4198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b419c: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x1b419cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1b41a0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1b41a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b41a4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1b41a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b41ac: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x1b41acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b41b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b41b4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b41b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b41b8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1b41b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1b41bc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1b41bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1b41c0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x1b41c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x1b41c4: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x1b41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x1b41c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B41C8u;
    {
        const bool branch_taken_0x1b41c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41C8u;
            // 0x1b41cc: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41c8) {
            ctx->pc = 0x1B41D4u;
            goto label_1b41d4;
        }
    }
    ctx->pc = 0x1B41D0u;
label_1b41d0:
    // 0x1b41d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b41d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b41d4:
    // 0x1b41d4: 0xc06cd9c  jal         func_1B3670
    ctx->pc = 0x1B41D4u;
    SET_GPR_U32(ctx, 31, 0x1B41DCu);
    ctx->pc = 0x1B41D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41D4u;
            // 0x1b41d8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3670u;
    if (runtime->hasFunction(0x1B3670u)) {
        auto targetFn = runtime->lookupFunction(0x1B3670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41DCu; }
        if (ctx->pc != 0x1B41DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadManagerInit_0x1b3670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41DCu; }
        if (ctx->pc != 0x1B41DCu) { return; }
    }
    ctx->pc = 0x1B41DCu;
label_1b41dc:
    // 0x1b41dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b41dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b41e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B41E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B41E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41E0u;
            // 0x1b41e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B41E8u;
label_1b41e8:
    // 0x1b41e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b41e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b41ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b41ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b41f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b41f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b41f4: 0x806ce14  j           func_1B3850
    ctx->pc = 0x1B41F4u;
    ctx->pc = 0x1B41F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41F4u;
            // 0x1b41f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3850u;
    if (runtime->hasFunction(0x1B3850u)) {
        auto targetFn = runtime->lookupFunction(0x1B3850u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B3850_0x1b3850(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B41FCu;
    // 0x1b41fc: 0x0  nop
    ctx->pc = 0x1b41fcu;
    // NOP
label_1b4200:
    // 0x1b4200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4208: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b4208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b420c: 0xc06cf8a  jal         func_1B3E28
    ctx->pc = 0x1B420Cu;
    SET_GPR_U32(ctx, 31, 0x1B4214u);
    ctx->pc = 0x1B3E28u;
    if (runtime->hasFunction(0x1B3E28u)) {
        auto targetFn = runtime->lookupFunction(0x1B3E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4214u; }
        if (ctx->pc != 0x1B4214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3E28_0x1b3e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4214u; }
        if (ctx->pc != 0x1B4214u) { return; }
    }
    ctx->pc = 0x1B4214u;
label_1b4214:
    // 0x1b4214: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b4214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b4218: 0x24503108  addiu       $s0, $v0, 0x3108
    ctx->pc = 0x1b4218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12552));
    // 0x1b421c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b421cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4220: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1B4220u;
    {
        const bool branch_taken_0x1b4220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4220) {
            ctx->pc = 0x1B4224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4220u;
            // 0x1b4224: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4258u;
            goto label_1b4258;
        }
    }
    ctx->pc = 0x1B4228u;
    // 0x1b4228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b422c: 0xc06cf90  jal         func_1B3E40
    ctx->pc = 0x1B422Cu;
    SET_GPR_U32(ctx, 31, 0x1B4234u);
    ctx->pc = 0x1B4230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B422Cu;
            // 0x1b4230: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E40u;
    if (runtime->hasFunction(0x1B3E40u)) {
        auto targetFn = runtime->lookupFunction(0x1B3E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4234u; }
        if (ctx->pc != 0x1B4234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3E40_0x1b3e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4234u; }
        if (ctx->pc != 0x1B4234u) { return; }
    }
    ctx->pc = 0x1B4234u;
label_1b4234:
    // 0x1b4234: 0xc06eab2  jal         func_1BAAC8
    ctx->pc = 0x1B4234u;
    SET_GPR_U32(ctx, 31, 0x1B423Cu);
    ctx->pc = 0x1BAAC8u;
    if (runtime->hasFunction(0x1BAAC8u)) {
        auto targetFn = runtime->lookupFunction(0x1BAAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B423Cu; }
        if (ctx->pc != 0x1B423Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAAC8_0x1baac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B423Cu; }
        if (ctx->pc != 0x1B423Cu) { return; }
    }
    ctx->pc = 0x1B423Cu;
label_1b423c:
    // 0x1b423c: 0xc06c6b8  jal         func_1B1AE0
    ctx->pc = 0x1B423Cu;
    SET_GPR_U32(ctx, 31, 0x1B4244u);
    ctx->pc = 0x1B1AE0u;
    if (runtime->hasFunction(0x1B1AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4244u; }
        if (ctx->pc != 0x1B4244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AE0_0x1b1ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4244u; }
        if (ctx->pc != 0x1B4244u) { return; }
    }
    ctx->pc = 0x1B4244u;
label_1b4244:
    // 0x1b4244: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b4244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b4248: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b4248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b424c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b424cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4250: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4250u;
            // 0x1b4254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4258u;
label_1b4258:
    // 0x1b4258: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b4258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b425c: 0x806cf90  j           func_1B3E40
    ctx->pc = 0x1B425Cu;
    ctx->pc = 0x1B4260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B425Cu;
            // 0x1b4260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E40u;
    if (runtime->hasFunction(0x1B3E40u)) {
        auto targetFn = runtime->lookupFunction(0x1B3E40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B3E40_0x1b3e40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B4264u;
    // 0x1b4264: 0x0  nop
    ctx->pc = 0x1b4264u;
    // NOP
label_1b4268:
    // 0x1b4268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b426c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4274: 0x80736d2  j           func_1CDB48
    ctx->pc = 0x1B4274u;
    ctx->pc = 0x1B4278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4274u;
            // 0x1b4278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB48u;
    if (runtime->hasFunction(0x1CDB48u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB48u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDB48_0x1cdb48(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B427Cu;
    // 0x1b427c: 0x0  nop
    ctx->pc = 0x1b427cu;
    // NOP
label_1b4280:
    // 0x1b4280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b428c: 0x80736d8  j           func_1CDB60
    ctx->pc = 0x1B428Cu;
    ctx->pc = 0x1B4290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B428Cu;
            // 0x1b4290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    if (runtime->hasFunction(0x1CDB60u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDB60_0x1cdb60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B4294u;
    // 0x1b4294: 0x0  nop
    ctx->pc = 0x1b4294u;
    // NOP
label_1b4298:
    // 0x1b4298: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b4298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b429c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b42a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1b42a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1b42a4: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1b42a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x1b42a8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1b42a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1b42ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b42acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42b0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b42b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1b42b4: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x1b42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
    // 0x1b42b8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1b42b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1b42bc: 0x8e432ff4  lw          $v1, 0x2FF4($s2)
    ctx->pc = 0x1b42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12276)));
    // 0x1b42c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b42c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b42c4: 0x54600066  bnel        $v1, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x1B42C4u;
    {
        const bool branch_taken_0x1b42c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b42c4) {
            ctx->pc = 0x1B42C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42C4u;
            // 0x1b42c8: 0x26432ff4  addiu       $v1, $s2, 0x2FF4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12276));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4460u;
            goto label_1b4460;
        }
    }
    ctx->pc = 0x1B42CCu;
    // 0x1b42cc: 0xc0739d2  jal         func_1CE748
    ctx->pc = 0x1B42CCu;
    SET_GPR_U32(ctx, 31, 0x1B42D4u);
    ctx->pc = 0x1CE748u;
    if (runtime->hasFunction(0x1CE748u)) {
        auto targetFn = runtime->lookupFunction(0x1CE748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42D4u; }
        if (ctx->pc != 0x1B42D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE748_0x1ce748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42D4u; }
        if (ctx->pc != 0x1B42D4u) { return; }
    }
    ctx->pc = 0x1B42D4u;
label_1b42d4:
    // 0x1b42d4: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b42d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b42d8: 0x248429a0  addiu       $a0, $a0, 0x29A0
    ctx->pc = 0x1b42d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10656));
    // 0x1b42dc: 0xc07390a  jal         func_1CE428
    ctx->pc = 0x1B42DCu;
    SET_GPR_U32(ctx, 31, 0x1B42E4u);
    ctx->pc = 0x1B42E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42DCu;
            // 0x1b42e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE428u;
    if (runtime->hasFunction(0x1CE428u)) {
        auto targetFn = runtime->lookupFunction(0x1CE428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42E4u; }
        if (ctx->pc != 0x1B42E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE428_0x1ce428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42E4u; }
        if (ctx->pc != 0x1B42E4u) { return; }
    }
    ctx->pc = 0x1B42E4u;
label_1b42e4:
    // 0x1b42e4: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b42e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b42e8: 0x24842a28  addiu       $a0, $a0, 0x2A28
    ctx->pc = 0x1b42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10792));
    // 0x1b42ec: 0xc073910  jal         func_1CE440
    ctx->pc = 0x1B42ECu;
    SET_GPR_U32(ctx, 31, 0x1B42F4u);
    ctx->pc = 0x1B42F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42ECu;
            // 0x1b42f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE440u;
    if (runtime->hasFunction(0x1CE440u)) {
        auto targetFn = runtime->lookupFunction(0x1CE440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42F4u; }
        if (ctx->pc != 0x1B42F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE440_0x1ce440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42F4u; }
        if (ctx->pc != 0x1B42F4u) { return; }
    }
    ctx->pc = 0x1B42F4u;
label_1b42f4:
    // 0x1b42f4: 0x56200018  bnel        $s1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B42F4u;
    {
        const bool branch_taken_0x1b42f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b42f4) {
            ctx->pc = 0x1B42F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42F4u;
            // 0x1b42f8: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4358u;
            goto label_1b4358;
        }
    }
    ctx->pc = 0x1B42FCu;
    // 0x1b42fc: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b42fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b4300: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1b4300u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b4304: 0x26023000  addiu       $v0, $s0, 0x3000
    ctx->pc = 0x1b4304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12288));
    // 0x1b4308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b4308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b430c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b430cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4310: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b4310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b4314: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1b4314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b4318: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x1b4318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1b431c: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x1b431cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1b4320: 0x2409001a  addiu       $t1, $zero, 0x1A
    ctx->pc = 0x1b4320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1b4324: 0xac4a0014  sw          $t2, 0x14($v0)
    ctx->pc = 0x1b4324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 10));
    // 0x1b4328: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b4328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b432c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1b432cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1b4330: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1b4330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1b4334: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1b4334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1b4338: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1b4338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x1b433c: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x1b433cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 8));
    // 0x1b4340: 0xac49001c  sw          $t1, 0x1C($v0)
    ctx->pc = 0x1b4340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 9));
    // 0x1b4344: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1b4344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1b4348: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1b4348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1b434c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1b434cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1b4350: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B4350u;
    {
        const bool branch_taken_0x1b4350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4350u;
            // 0x1b4354: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4350) {
            ctx->pc = 0x1B43BCu;
            goto label_1b43bc;
        }
    }
    ctx->pc = 0x1B4358u;
label_1b4358:
    // 0x1b4358: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b4358u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b435c: 0x26043000  addiu       $a0, $s0, 0x3000
    ctx->pc = 0x1b435cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12288));
    // 0x1b4360: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1b4360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b4364: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1b4364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1b4368: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1b4368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1b436c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b436cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b4370: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1b4370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1b4374: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b4374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b4378: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x1b4378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x1b437c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b4380: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1b4380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1b4384: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1b4384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b4388: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1b4388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1b438c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1b438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b4390: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1b4390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1b4394: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1b4394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b4398: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1b4398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1b439c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1b439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1b43a0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1b43a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1b43a4: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1b43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b43a8: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x1b43a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x1b43ac: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1b43acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1b43b0: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x1b43b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x1b43b4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1b43b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1b43b8: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x1b43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_1b43bc:
    // 0x1b43bc: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x1B43BCu;
    SET_GPR_U32(ctx, 31, 0x1B43C4u);
    ctx->pc = 0x1B43C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43BCu;
            // 0x1b43c0: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43C4u; }
        if (ctx->pc != 0x1B43C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43C4u; }
        if (ctx->pc != 0x1B43C4u) { return; }
    }
    ctx->pc = 0x1B43C4u;
label_1b43c4:
    // 0x1b43c4: 0x26313098  addiu       $s1, $s1, 0x3098
    ctx->pc = 0x1b43c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12440));
    // 0x1b43c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b43c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b43ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b43d0: 0x26103000  addiu       $s0, $s0, 0x3000
    ctx->pc = 0x1b43d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12288));
    // 0x1b43d4: 0xc0432d8  jal         func_10CB60
    ctx->pc = 0x1B43D4u;
    SET_GPR_U32(ctx, 31, 0x1B43DCu);
    ctx->pc = 0x1B43D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43D4u;
            // 0x1b43d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB60u;
    if (runtime->hasFunction(0x10CB60u)) {
        auto targetFn = runtime->lookupFunction(0x10CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43DCu; }
        if (ctx->pc != 0x1B43DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallReferThreadStatusWrapper_0x10cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43DCu; }
        if (ctx->pc != 0x1B43DCu) { return; }
    }
    ctx->pc = 0x1B43DCu;
label_1b43dc:
    // 0x1b43dc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b43dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b43e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1b43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b43e4: 0xc06cc98  jal         func_1B3260
    ctx->pc = 0x1B43E4u;
    SET_GPR_U32(ctx, 31, 0x1B43ECu);
    ctx->pc = 0x1B43E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43E4u;
            // 0x1b43e8: 0xac62a928  sw          $v0, -0x56D8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3260u;
    if (runtime->hasFunction(0x1B3260u)) {
        auto targetFn = runtime->lookupFunction(0x1B3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43ECu; }
        if (ctx->pc != 0x1B43ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadCreateWorker0_0x1b3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43ECu; }
        if (ctx->pc != 0x1B43ECu) { return; }
    }
    ctx->pc = 0x1B43ECu;
label_1b43ec:
    // 0x1b43ec: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1b43ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b43f0: 0xc06ccc2  jal         func_1B3308
    ctx->pc = 0x1B43F0u;
    SET_GPR_U32(ctx, 31, 0x1B43F8u);
    ctx->pc = 0x1B43F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43F0u;
            // 0x1b43f4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3308u;
    if (runtime->hasFunction(0x1B3308u)) {
        auto targetFn = runtime->lookupFunction(0x1B3308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43F8u; }
        if (ctx->pc != 0x1B43F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadCreateWorker1_0x1b3308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43F8u; }
        if (ctx->pc != 0x1B43F8u) { return; }
    }
    ctx->pc = 0x1B43F8u;
label_1b43f8:
    // 0x1b43f8: 0xc06ccf0  jal         func_1B33C0
    ctx->pc = 0x1B43F8u;
    SET_GPR_U32(ctx, 31, 0x1B4400u);
    ctx->pc = 0x1B33C0u;
    if (runtime->hasFunction(0x1B33C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B33C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4400u; }
        if (ctx->pc != 0x1B4400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadCreateWorker2_0x1b33c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4400u; }
        if (ctx->pc != 0x1B4400u) { return; }
    }
    ctx->pc = 0x1B4400u;
label_1b4400:
    // 0x1b4400: 0xc06cd12  jal         func_1B3448
    ctx->pc = 0x1B4400u;
    SET_GPR_U32(ctx, 31, 0x1B4408u);
    ctx->pc = 0x1B3448u;
    if (runtime->hasFunction(0x1B3448u)) {
        auto targetFn = runtime->lookupFunction(0x1B3448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4408u; }
        if (ctx->pc != 0x1B4408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadCreateWorker3_0x1b3448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4408u; }
        if (ctx->pc != 0x1B4408u) { return; }
    }
    ctx->pc = 0x1B4408u;
label_1b4408:
    // 0x1b4408: 0xc06cd34  jal         func_1B34D0
    ctx->pc = 0x1B4408u;
    SET_GPR_U32(ctx, 31, 0x1B4410u);
    ctx->pc = 0x1B34D0u;
    if (runtime->hasFunction(0x1B34D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B34D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4410u; }
        if (ctx->pc != 0x1B4410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B34D0_0x1b34d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4410u; }
        if (ctx->pc != 0x1B4410u) { return; }
    }
    ctx->pc = 0x1B4410u;
label_1b4410:
    // 0x1b4410: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1b4410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b4414: 0xc06cd5a  jal         func_1B3568
    ctx->pc = 0x1B4414u;
    SET_GPR_U32(ctx, 31, 0x1B441Cu);
    ctx->pc = 0x1B4418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4414u;
            // 0x1b4418: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3568u;
    if (runtime->hasFunction(0x1B3568u)) {
        auto targetFn = runtime->lookupFunction(0x1B3568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B441Cu; }
        if (ctx->pc != 0x1B441Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3568_0x1b3568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B441Cu; }
        if (ctx->pc != 0x1B441Cu) { return; }
    }
    ctx->pc = 0x1B441Cu;
label_1b441c:
    // 0x1b441c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b441cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b4420: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B4420u;
    SET_GPR_U32(ctx, 31, 0x1B4428u);
    ctx->pc = 0x1B4424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4420u;
            // 0x1b4424: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4428u; }
        if (ctx->pc != 0x1B4428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4428u; }
        if (ctx->pc != 0x1B4428u) { return; }
    }
    ctx->pc = 0x1B4428u;
label_1b4428:
    // 0x1b4428: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b4428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b442c: 0x24a52b80  addiu       $a1, $a1, 0x2B80
    ctx->pc = 0x1b442cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11136));
    // 0x1b4430: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b4430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b4434: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1B4434u;
    SET_GPR_U32(ctx, 31, 0x1B443Cu);
    ctx->pc = 0x1B4438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4434u;
            // 0x1b4438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (runtime->hasFunction(0x1CE350u)) {
        auto targetFn = runtime->lookupFunction(0x1CE350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B443Cu; }
        if (ctx->pc != 0x1B443Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE350_0x1ce350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B443Cu; }
        if (ctx->pc != 0x1B443Cu) { return; }
    }
    ctx->pc = 0x1B443Cu;
label_1b443c:
    // 0x1b443c: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b443cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b4440: 0x24a52ba8  addiu       $a1, $a1, 0x2BA8
    ctx->pc = 0x1b4440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11176));
    // 0x1b4444: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b4444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b4448: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1B4448u;
    SET_GPR_U32(ctx, 31, 0x1B4450u);
    ctx->pc = 0x1B444Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4448u;
            // 0x1b444c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (runtime->hasFunction(0x1CE350u)) {
        auto targetFn = runtime->lookupFunction(0x1CE350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4450u; }
        if (ctx->pc != 0x1B4450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE350_0x1ce350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4450u; }
        if (ctx->pc != 0x1B4450u) { return; }
    }
    ctx->pc = 0x1B4450u;
label_1b4450:
    // 0x1b4450: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b4450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b4454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4458: 0xac622ff8  sw          $v0, 0x2FF8($v1)
    ctx->pc = 0x1b4458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12280), GPR_U32(ctx, 2));
    // 0x1b445c: 0x26432ff4  addiu       $v1, $s2, 0x2FF4
    ctx->pc = 0x1b445cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12276));
label_1b4460:
    // 0x1b4460: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1b4460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4464: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b4464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4468: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b4468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b446c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1b446cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b4470: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b4470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b4474: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1b4474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b4478: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b4478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b447c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B447Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B447Cu;
            // 0x1b4480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4484u;
    // 0x1b4484: 0x0  nop
    ctx->pc = 0x1b4484u;
    // NOP
label_1b4488:
    // 0x1b4488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b448c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b448cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b4490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4494: 0x24632ff4  addiu       $v1, $v1, 0x2FF4
    ctx->pc = 0x1b4494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12276));
    // 0x1b4498: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b4498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b449c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b449cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b44a0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B44A0u;
    {
        const bool branch_taken_0x1b44a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B44A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44A0u;
            // 0x1b44a4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44a0) {
            ctx->pc = 0x1B4528u;
            goto label_1b4528;
        }
    }
    ctx->pc = 0x1B44A8u;
    // 0x1b44a8: 0xc06ce00  jal         func_1B3800
    ctx->pc = 0x1B44A8u;
    SET_GPR_U32(ctx, 31, 0x1B44B0u);
    ctx->pc = 0x1B3800u;
    if (runtime->hasFunction(0x1B3800u)) {
        auto targetFn = runtime->lookupFunction(0x1B3800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44B0u; }
        if (ctx->pc != 0x1B44B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3800_0x1b3800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44B0u; }
        if (ctx->pc != 0x1B44B0u) { return; }
    }
    ctx->pc = 0x1B44B0u;
label_1b44b0:
    // 0x1b44b0: 0xc06ce3a  jal         func_1B38E8
    ctx->pc = 0x1B44B0u;
    SET_GPR_U32(ctx, 31, 0x1B44B8u);
    ctx->pc = 0x1B38E8u;
    if (runtime->hasFunction(0x1B38E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B38E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44B8u; }
        if (ctx->pc != 0x1B44B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B38E8_0x1b38e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44B8u; }
        if (ctx->pc != 0x1B44B8u) { return; }
    }
    ctx->pc = 0x1B44B8u;
label_1b44b8:
    // 0x1b44b8: 0xc06ce6e  jal         func_1B39B8
    ctx->pc = 0x1B44B8u;
    SET_GPR_U32(ctx, 31, 0x1B44C0u);
    ctx->pc = 0x1B39B8u;
    if (runtime->hasFunction(0x1B39B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B39B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44C0u; }
        if (ctx->pc != 0x1B44C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B39B8_0x1b39b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44C0u; }
        if (ctx->pc != 0x1B44C0u) { return; }
    }
    ctx->pc = 0x1B44C0u;
label_1b44c0:
    // 0x1b44c0: 0xc06ced6  jal         func_1B3B58
    ctx->pc = 0x1B44C0u;
    SET_GPR_U32(ctx, 31, 0x1B44C8u);
    ctx->pc = 0x1B3B58u;
    if (runtime->hasFunction(0x1B3B58u)) {
        auto targetFn = runtime->lookupFunction(0x1B3B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44C8u; }
        if (ctx->pc != 0x1B44C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3B58_0x1b3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44C8u; }
        if (ctx->pc != 0x1B44C8u) { return; }
    }
    ctx->pc = 0x1B44C8u;
label_1b44c8:
    // 0x1b44c8: 0xc06cea2  jal         func_1B3A88
    ctx->pc = 0x1B44C8u;
    SET_GPR_U32(ctx, 31, 0x1B44D0u);
    ctx->pc = 0x1B3A88u;
    if (runtime->hasFunction(0x1B3A88u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44D0u; }
        if (ctx->pc != 0x1B44D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3A88_0x1b3a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44D0u; }
        if (ctx->pc != 0x1B44D0u) { return; }
    }
    ctx->pc = 0x1B44D0u;
label_1b44d0:
    // 0x1b44d0: 0xc06cf22  jal         func_1B3C88
    ctx->pc = 0x1B44D0u;
    SET_GPR_U32(ctx, 31, 0x1B44D8u);
    ctx->pc = 0x1B3C88u;
    if (runtime->hasFunction(0x1B3C88u)) {
        auto targetFn = runtime->lookupFunction(0x1B3C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44D8u; }
        if (ctx->pc != 0x1B44D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3C88_0x1b3c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44D8u; }
        if (ctx->pc != 0x1B44D8u) { return; }
    }
    ctx->pc = 0x1B44D8u;
label_1b44d8:
    // 0x1b44d8: 0xc06cf56  jal         func_1B3D58
    ctx->pc = 0x1B44D8u;
    SET_GPR_U32(ctx, 31, 0x1B44E0u);
    ctx->pc = 0x1B3D58u;
    if (runtime->hasFunction(0x1B3D58u)) {
        auto targetFn = runtime->lookupFunction(0x1B3D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44E0u; }
        if (ctx->pc != 0x1B44E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3D58_0x1b3d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44E0u; }
        if (ctx->pc != 0x1B44E0u) { return; }
    }
    ctx->pc = 0x1B44E0u;
label_1b44e0:
    // 0x1b44e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b44e4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b44e8: 0x24423098  addiu       $v0, $v0, 0x3098
    ctx->pc = 0x1b44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12440));
    // 0x1b44ec: 0x8c65a928  lw          $a1, -0x56D8($v1)
    ctx->pc = 0x1b44ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945064)));
    // 0x1b44f0: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B44F0u;
    SET_GPR_U32(ctx, 31, 0x1B44F8u);
    ctx->pc = 0x1B44F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44F0u;
            // 0x1b44f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44F8u; }
        if (ctx->pc != 0x1B44F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44F8u; }
        if (ctx->pc != 0x1B44F8u) { return; }
    }
    ctx->pc = 0x1B44F8u;
label_1b44f8:
    // 0x1b44f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b44f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44fc: 0xc07390a  jal         func_1CE428
    ctx->pc = 0x1B44FCu;
    SET_GPR_U32(ctx, 31, 0x1B4504u);
    ctx->pc = 0x1B4500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44FCu;
            // 0x1b4500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE428u;
    if (runtime->hasFunction(0x1CE428u)) {
        auto targetFn = runtime->lookupFunction(0x1CE428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4504u; }
        if (ctx->pc != 0x1B4504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE428_0x1ce428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4504u; }
        if (ctx->pc != 0x1B4504u) { return; }
    }
    ctx->pc = 0x1B4504u;
label_1b4504:
    // 0x1b4504: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4508: 0xc073910  jal         func_1CE440
    ctx->pc = 0x1B4508u;
    SET_GPR_U32(ctx, 31, 0x1B4510u);
    ctx->pc = 0x1B450Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4508u;
            // 0x1b450c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE440u;
    if (runtime->hasFunction(0x1CE440u)) {
        auto targetFn = runtime->lookupFunction(0x1CE440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4510u; }
        if (ctx->pc != 0x1B4510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE440_0x1ce440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4510u; }
        if (ctx->pc != 0x1B4510u) { return; }
    }
    ctx->pc = 0x1B4510u;
label_1b4510:
    // 0x1b4510: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b4510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b4514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4518: 0xac402ff8  sw          $zero, 0x2FF8($v0)
    ctx->pc = 0x1b4518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12280), GPR_U32(ctx, 0));
    // 0x1b451c: 0x80739e2  j           func_1CE788
    ctx->pc = 0x1B451Cu;
    ctx->pc = 0x1B4520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B451Cu;
            // 0x1b4520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE788u;
    if (runtime->hasFunction(0x1CE788u)) {
        auto targetFn = runtime->lookupFunction(0x1CE788u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE788_0x1ce788(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B4524u;
    // 0x1b4524: 0x0  nop
    ctx->pc = 0x1b4524u;
    // NOP
label_1b4528:
    // 0x1b4528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b452c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B452Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B452Cu;
            // 0x1b4530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4534u;
    // 0x1b4534: 0x0  nop
    ctx->pc = 0x1b4534u;
    // NOP
label_1b4538:
    // 0x1b4538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b453c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b453cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4544: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b4544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4548: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b454c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b454cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4554: 0x8073872  j           func_1CE1C8
    ctx->pc = 0x1B4554u;
    ctx->pc = 0x1B4558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4554u;
            // 0x1b4558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1C8u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B455Cu;
    // 0x1b455c: 0x0  nop
    ctx->pc = 0x1b455cu;
    // NOP
label_1b4560:
    // 0x1b4560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4564: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b4564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b456c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b456cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4570: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b4570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b4574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b457c: 0x8073872  j           func_1CE1C8
    ctx->pc = 0x1B457Cu;
    ctx->pc = 0x1B4580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B457Cu;
            // 0x1b4580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1C8u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B4584u;
    // 0x1b4584: 0x0  nop
    ctx->pc = 0x1b4584u;
    // NOP
label_1b4588:
    // 0x1b4588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b458c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b4590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4598: 0x80738ea  j           func_1CE3A8
    ctx->pc = 0x1B4598u;
    ctx->pc = 0x1B459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4598u;
            // 0x1b459c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3A8u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B45A0u;
label_1b45a0:
    // 0x1b45a0: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1b45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1b45a4: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1b45a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1b45a8: 0x24425320  addiu       $v0, $v0, 0x5320
    ctx->pc = 0x1b45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21280));
    // 0x1b45ac: 0x24635328  addiu       $v1, $v1, 0x5328
    ctx->pc = 0x1b45acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21288));
    // 0x1b45b0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1b45b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1b45b4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1b45b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1b45b8: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x1b45b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x1b45bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B45BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B45C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45BCu;
            // 0x1b45c0: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B45C4u;
    // 0x1b45c4: 0x0  nop
    ctx->pc = 0x1b45c4u;
    // NOP
    ctx->pc = 0x1b45c8u;
}
