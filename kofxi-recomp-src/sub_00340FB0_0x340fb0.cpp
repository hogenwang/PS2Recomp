#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00340FB0
// Address: 0x340fb0 - 0x341080
void sub_00340FB0_0x340fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340FB0_0x340fb0");
#endif

    switch (ctx->pc) {
        case 0x341018u: goto label_341018;
        case 0x341020u: goto label_341020;
        case 0x341048u: goto label_341048;
        case 0x341070u: goto label_341070;
        default: break;
    }

    ctx->pc = 0x340fb0u;

    // 0x340fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x340fb4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x340fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x340fbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x340fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340fc0: 0xac40ea64  sw          $zero, -0x159C($v0)
    ctx->pc = 0x340fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961764), GPR_U32(ctx, 0));
    // 0x340fc4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340fc8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340fcc: 0xac64ea60  sw          $a0, -0x15A0($v1)
    ctx->pc = 0x340fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961760), GPR_U32(ctx, 4));
    // 0x340fd0: 0xac44ea74  sw          $a0, -0x158C($v0)
    ctx->pc = 0x340fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961780), GPR_U32(ctx, 4));
    // 0x340fd4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340fd8: 0x3c040106  lui         $a0, 0x106
    ctx->pc = 0x340fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)262 << 16));
    // 0x340fdc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340fe0: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x340fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x340fe4: 0x3c010050  lui         $at, 0x50
    ctx->pc = 0x340fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)80 << 16));
    // 0x340fe8: 0xac44ea58  sw          $a0, -0x15A8($v0)
    ctx->pc = 0x340fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961752), GPR_U32(ctx, 4));
    // 0x340fec: 0x812021  addu        $a0, $a0, $at
    ctx->pc = 0x340fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x340ff0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340ff4: 0xac44ea50  sw          $a0, -0x15B0($v0)
    ctx->pc = 0x340ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961744), GPR_U32(ctx, 4));
    // 0x340ff8: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x340ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
    // 0x340ffc: 0xac60ea68  sw          $zero, -0x1598($v1)
    ctx->pc = 0x340ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961768), GPR_U32(ctx, 0));
    // 0x341000: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341004: 0x811821  addu        $v1, $a0, $at
    ctx->pc = 0x341004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x341008: 0xac43ea48  sw          $v1, -0x15B8($v0)
    ctx->pc = 0x341008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961736), GPR_U32(ctx, 3));
    // 0x34100c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341010: 0xc0d045c  jal         func_341170
    ctx->pc = 0x341010u;
    SET_GPR_U32(ctx, 31, 0x341018u);
    ctx->pc = 0x341014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341010u;
            // 0x341014: 0xac43ea40  sw          $v1, -0x15C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x341170u;
    if (runtime->hasFunction(0x341170u)) {
        auto targetFn = runtime->lookupFunction(0x341170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341018u; }
        if (ctx->pc != 0x341018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341170_0x341170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341018u; }
        if (ctx->pc != 0x341018u) { return; }
    }
    ctx->pc = 0x341018u;
label_341018:
    // 0x341018: 0xc0d0464  jal         func_341190
    ctx->pc = 0x341018u;
    SET_GPR_U32(ctx, 31, 0x341020u);
    ctx->pc = 0x341190u;
    if (runtime->hasFunction(0x341190u)) {
        auto targetFn = runtime->lookupFunction(0x341190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341020u; }
        if (ctx->pc != 0x341020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341190_0x341190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341020u; }
        if (ctx->pc != 0x341020u) { return; }
    }
    ctx->pc = 0x341020u;
label_341020:
    // 0x341020: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341024: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x341024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x341028: 0x2484e970  addiu       $a0, $a0, -0x1690
    ctx->pc = 0x341028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961520));
    // 0x34102c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x34102cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x341030: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x341030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x341034: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x341034u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341038: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x341038u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34103c: 0x240a0070  addiu       $t2, $zero, 0x70
    ctx->pc = 0x34103cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x341040: 0xc040532  jal         func_1014C8
    ctx->pc = 0x341040u;
    SET_GPR_U32(ctx, 31, 0x341048u);
    ctx->pc = 0x341044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341040u;
            // 0x341044: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341048u; }
        if (ctx->pc != 0x341048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341048u; }
        if (ctx->pc != 0x341048u) { return; }
    }
    ctx->pc = 0x341048u;
label_341048:
    // 0x341048: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34104c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x34104cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x341050: 0x2484e910  addiu       $a0, $a0, -0x16F0
    ctx->pc = 0x341050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961424));
    // 0x341054: 0x24053e80  addiu       $a1, $zero, 0x3E80
    ctx->pc = 0x341054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x341058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x341058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34105c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34105cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341060: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x341060u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341064: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x341064u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341068: 0xc040532  jal         func_1014C8
    ctx->pc = 0x341068u;
    SET_GPR_U32(ctx, 31, 0x341070u);
    ctx->pc = 0x34106Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341068u;
            // 0x34106c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341070u; }
        if (ctx->pc != 0x341070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341070u; }
        if (ctx->pc != 0x341070u) { return; }
    }
    ctx->pc = 0x341070u;
label_341070:
    // 0x341070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341074: 0x3e00008  jr          $ra
    ctx->pc = 0x341074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341074u;
            // 0x341078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34107Cu;
    // 0x34107c: 0x0  nop
    ctx->pc = 0x34107cu;
    // NOP
    ctx->pc = 0x341080u;
}
