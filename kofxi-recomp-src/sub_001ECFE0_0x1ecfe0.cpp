#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ECFE0
// Address: 0x1ecfe0 - 0x1ed070
void sub_001ECFE0_0x1ecfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECFE0_0x1ecfe0");
#endif

    switch (ctx->pc) {
        case 0x1ed004u: goto label_1ed004;
        case 0x1ed018u: goto label_1ed018;
        case 0x1ed02cu: goto label_1ed02c;
        case 0x1ed054u: goto label_1ed054;
        default: break;
    }

    ctx->pc = 0x1ecfe0u;

    // 0x1ecfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ecfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ecfe4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1ecfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1ecfe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ecfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ecfec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ecfecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecff0: 0x2445f5b0  addiu       $a1, $v0, -0xA50
    ctx->pc = 0x1ecff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964656));
    // 0x1ecff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ecff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ecff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ecff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ecffc: 0xc07b4f4  jal         func_1ED3D0
    ctx->pc = 0x1ECFFCu;
    SET_GPR_U32(ctx, 31, 0x1ED004u);
    ctx->pc = 0x1ED000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECFFCu;
            // 0x1ed000: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3D0u;
    if (runtime->hasFunction(0x1ED3D0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED004u; }
        if (ctx->pc != 0x1ED004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED3D0_0x1ed3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED004u; }
        if (ctx->pc != 0x1ED004u) { return; }
    }
    ctx->pc = 0x1ED004u;
label_1ed004:
    // 0x1ed004: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1ed004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1ed008: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1ed008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1ed00c: 0x24a5f600  addiu       $a1, $a1, -0xA00
    ctx->pc = 0x1ed00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964736));
    // 0x1ed010: 0xc07b4f4  jal         func_1ED3D0
    ctx->pc = 0x1ED010u;
    SET_GPR_U32(ctx, 31, 0x1ED018u);
    ctx->pc = 0x1ED014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED010u;
            // 0x1ed014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3D0u;
    if (runtime->hasFunction(0x1ED3D0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED018u; }
        if (ctx->pc != 0x1ED018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED3D0_0x1ed3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED018u; }
        if (ctx->pc != 0x1ED018u) { return; }
    }
    ctx->pc = 0x1ED018u;
label_1ed018:
    // 0x1ed018: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1ed018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1ed01c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1ed01cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1ed020: 0x24a5f650  addiu       $a1, $a1, -0x9B0
    ctx->pc = 0x1ed020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964816));
    // 0x1ed024: 0xc07b4f4  jal         func_1ED3D0
    ctx->pc = 0x1ED024u;
    SET_GPR_U32(ctx, 31, 0x1ED02Cu);
    ctx->pc = 0x1ED028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED024u;
            // 0x1ed028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3D0u;
    if (runtime->hasFunction(0x1ED3D0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED02Cu; }
        if (ctx->pc != 0x1ED02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED3D0_0x1ed3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED02Cu; }
        if (ctx->pc != 0x1ED02Cu) { return; }
    }
    ctx->pc = 0x1ED02Cu;
label_1ed02c:
    // 0x1ed02c: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1ed02cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1ed030: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ed030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ed034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed038: 0x24a5f6a0  addiu       $a1, $a1, -0x960
    ctx->pc = 0x1ed038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964896));
    // 0x1ed03c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED03Cu;
    {
        const bool branch_taken_0x1ed03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ED040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED03Cu;
            // 0x1ed040: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed03c) {
            ctx->pc = 0x1ED04Cu;
            goto label_1ed04c;
        }
    }
    ctx->pc = 0x1ED044u;
    // 0x1ed044: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ed044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ed048: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1ed048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1ed04c:
    // 0x1ed04c: 0xc07b4f4  jal         func_1ED3D0
    ctx->pc = 0x1ED04Cu;
    SET_GPR_U32(ctx, 31, 0x1ED054u);
    ctx->pc = 0x1ED3D0u;
    if (runtime->hasFunction(0x1ED3D0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED054u; }
        if (ctx->pc != 0x1ED054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED3D0_0x1ed3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED054u; }
        if (ctx->pc != 0x1ED054u) { return; }
    }
    ctx->pc = 0x1ED054u;
label_1ed054:
    // 0x1ed054: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1ed054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1ed058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed05c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ed05cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ed060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed064: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED064u;
            // 0x1ed068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED06Cu;
    // 0x1ed06c: 0x0  nop
    ctx->pc = 0x1ed06cu;
    // NOP
    ctx->pc = 0x1ed070u;
}
