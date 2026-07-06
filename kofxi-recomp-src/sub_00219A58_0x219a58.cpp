#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00219A58
// Address: 0x219a58 - 0x219ae8
void sub_00219A58_0x219a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219A58_0x219a58");
#endif

    switch (ctx->pc) {
        case 0x219a78u: goto label_219a78;
        case 0x219a90u: goto label_219a90;
        case 0x219aa0u: goto label_219aa0;
        case 0x219ac8u: goto label_219ac8;
        default: break;
    }

    ctx->pc = 0x219a58u;

label_219a58:
    // 0x219a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219a5c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219a60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219a64: 0x24841310  addiu       $a0, $a0, 0x1310
    ctx->pc = 0x219a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
    // 0x219a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219a6c: 0x8043e52  j           func_10F948
    ctx->pc = 0x219A6Cu;
    ctx->pc = 0x219A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219A6Cu;
            // 0x219a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x219A74u;
    // 0x219a74: 0x0  nop
    ctx->pc = 0x219a74u;
    // NOP
label_219a78:
    // 0x219a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219a7c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x219a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x219a80: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x219a80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x219a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219a88: 0xc086696  jal         func_219A58
    ctx->pc = 0x219A88u;
    SET_GPR_U32(ctx, 31, 0x219A90u);
    ctx->pc = 0x219A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219A88u;
            // 0x219a8c: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219A58u;
    goto label_219a58;
    ctx->pc = 0x219A90u;
label_219a90:
    // 0x219a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219a94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a98: 0x3e00008  jr          $ra
    ctx->pc = 0x219A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219A98u;
            // 0x219a9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219AA0u;
label_219aa0:
    // 0x219aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219aa4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x219aa4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x219aa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219aac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219ab0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x219ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x219ab4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x219ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x219ab8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x219ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219abc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x219abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219ac0: 0xc086696  jal         func_219A58
    ctx->pc = 0x219AC0u;
    SET_GPR_U32(ctx, 31, 0x219AC8u);
    ctx->pc = 0x219AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219AC0u;
            // 0x219ac4: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219A58u;
    goto label_219a58;
    ctx->pc = 0x219AC8u;
label_219ac8:
    // 0x219ac8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x219ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x219acc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219ad0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x219ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x219ad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219ad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219adc: 0x3e00008  jr          $ra
    ctx->pc = 0x219ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219ADCu;
            // 0x219ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219AE4u;
    // 0x219ae4: 0x0  nop
    ctx->pc = 0x219ae4u;
    // NOP
    ctx->pc = 0x219ae8u;
}
