#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C278
// Address: 0x10c278 - 0x10c2f0
void sub_0010C278_0x10c278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C278_0x10c278");
#endif

    switch (ctx->pc) {
        case 0x10c28cu: goto label_10c28c;
        case 0x10c2e0u: goto label_10c2e0;
        default: break;
    }

    ctx->pc = 0x10c278u;

    // 0x10c278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c27c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c284: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10C284u;
    SET_GPR_U32(ctx, 31, 0x10C28Cu);
    ctx->pc = 0x10C288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C284u;
            // 0x10c288: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C28Cu; }
        if (ctx->pc != 0x10C28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C28Cu; }
        if (ctx->pc != 0x10C28Cu) { return; }
    }
    ctx->pc = 0x10C28Cu;
label_10c28c:
    // 0x10c28c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10c28cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10c290: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10c290u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10c294: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10c294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10c298: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10c298u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10c29c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x10c2a0: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10c2a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10c2a4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c2a8: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10c2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10c2ac: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10c2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10c2b0: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10c2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10c2b4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10c2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10c2b8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10c2b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10c2bc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x10c2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x10c2c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10c2c4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10c2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10c2c8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10c2cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C2CCu;
    {
        const bool branch_taken_0x10c2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2CCu;
            // 0x10c2d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2cc) {
            ctx->pc = 0x10C2E0u;
            goto label_10c2e0;
        }
    }
    ctx->pc = 0x10C2D4u;
    // 0x10c2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c2d8: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x10C2D8u;
    ctx->pc = 0x10C2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2D8u;
            // 0x10c2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10C2E0u;
label_10c2e0:
    // 0x10c2e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c2e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x10C2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2E4u;
            // 0x10c2e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C2ECu;
    // 0x10c2ec: 0x0  nop
    ctx->pc = 0x10c2ecu;
    // NOP
    ctx->pc = 0x10c2f0u;
}
