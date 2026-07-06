#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C200
// Address: 0x10c200 - 0x10c278
void sub_0010C200_0x10c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C200_0x10c200");
#endif

    switch (ctx->pc) {
        case 0x10c214u: goto label_10c214;
        case 0x10c268u: goto label_10c268;
        default: break;
    }

    ctx->pc = 0x10c200u;

    // 0x10c200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c20c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10C20Cu;
    SET_GPR_U32(ctx, 31, 0x10C214u);
    ctx->pc = 0x10C210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C20Cu;
            // 0x10c210: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C214u; }
        if (ctx->pc != 0x10C214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C214u; }
        if (ctx->pc != 0x10C214u) { return; }
    }
    ctx->pc = 0x10C214u;
label_10c214:
    // 0x10c214: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10c214u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10c218: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10c218u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10c21c: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10c21cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10c220: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10c220u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10c224: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10c224u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x10c228: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10c228u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10c22c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c230: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10c230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10c234: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10c234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10c238: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x10c238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x10c23c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10c240: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10c240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10c244: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x10c244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x10c248: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10c248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10c24c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10c24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10c250: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10c250u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10c254: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C254u;
    {
        const bool branch_taken_0x10c254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C254u;
            // 0x10c258: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c254) {
            ctx->pc = 0x10C268u;
            goto label_10c268;
        }
    }
    ctx->pc = 0x10C25Cu;
    // 0x10c25c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c260: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x10C260u;
    ctx->pc = 0x10C264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C260u;
            // 0x10c264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10C268u;
label_10c268:
    // 0x10c268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c26c: 0x3e00008  jr          $ra
    ctx->pc = 0x10C26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C26Cu;
            // 0x10c270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C274u;
    // 0x10c274: 0x0  nop
    ctx->pc = 0x10c274u;
    // NOP
    ctx->pc = 0x10c278u;
}
