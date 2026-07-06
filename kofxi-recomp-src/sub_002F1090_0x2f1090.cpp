#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1090
// Address: 0x2f1090 - 0x2f10f0
void sub_002F1090_0x2f1090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1090_0x2f1090");
#endif

    switch (ctx->pc) {
        case 0x2f10b4u: goto label_2f10b4;
        default: break;
    }

    ctx->pc = 0x2f1090u;

    // 0x2f1090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1098: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f1098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f109c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f109cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f10a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f10a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f10a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10a8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2f10a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f10ac: 0xc0bc404  jal         func_2F1010
    ctx->pc = 0x2F10ACu;
    SET_GPR_U32(ctx, 31, 0x2F10B4u);
    ctx->pc = 0x2F10B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F10ACu;
            // 0x2f10b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1010u;
    if (runtime->hasFunction(0x2F1010u)) {
        auto targetFn = runtime->lookupFunction(0x2F1010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F10B4u; }
        if (ctx->pc != 0x2F10B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1010_0x2f1010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F10B4u; }
        if (ctx->pc != 0x2F10B4u) { return; }
    }
    ctx->pc = 0x2F10B4u;
label_2f10b4:
    // 0x2f10b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F10B4u;
    {
        const bool branch_taken_0x2f10b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F10B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F10B4u;
            // 0x2f10b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10b4) {
            ctx->pc = 0x2F10D4u;
            goto label_2f10d4;
        }
    }
    ctx->pc = 0x2F10BCu;
    // 0x2f10bc: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F10BCu;
    {
        const bool branch_taken_0x2f10bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f10bc) {
            ctx->pc = 0x2F10C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F10BCu;
            // 0x2f10c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F10C4u;
            goto label_2f10c4;
        }
    }
    ctx->pc = 0x2F10C4u;
label_2f10c4:
    // 0x2f10c4: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x2f10c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f10c8: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x2f10c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f10cc: 0x4f7823  subu        $t7, $v0, $t7
    ctx->pc = 0x2f10ccu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2f10d0: 0x1cf2023  subu        $a0, $t6, $t7
    ctx->pc = 0x2f10d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_2f10d4:
    // 0x2f10d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f10d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f10d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f10d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f10dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f10e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f10e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f10e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F10E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F10E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F10E4u;
            // 0x2f10e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F10ECu;
    // 0x2f10ec: 0x0  nop
    ctx->pc = 0x2f10ecu;
    // NOP
    ctx->pc = 0x2f10f0u;
}
