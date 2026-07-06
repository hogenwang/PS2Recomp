#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00216478
// Address: 0x216478 - 0x216508
void sub_00216478_0x216478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216478_0x216478");
#endif

    switch (ctx->pc) {
        case 0x216498u: goto label_216498;
        case 0x2164b0u: goto label_2164b0;
        case 0x2164c0u: goto label_2164c0;
        case 0x2164e8u: goto label_2164e8;
        default: break;
    }

    ctx->pc = 0x216478u;

label_216478:
    // 0x216478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21647c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21647cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216484: 0x24840cd8  addiu       $a0, $a0, 0xCD8
    ctx->pc = 0x216484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3288));
    // 0x216488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21648c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21648Cu;
    ctx->pc = 0x216490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21648Cu;
            // 0x216490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x216494u;
    // 0x216494: 0x0  nop
    ctx->pc = 0x216494u;
    // NOP
label_216498:
    // 0x216498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21649c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21649cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2164a0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2164a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2164a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2164a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2164a8: 0xc08591e  jal         func_216478
    ctx->pc = 0x2164A8u;
    SET_GPR_U32(ctx, 31, 0x2164B0u);
    ctx->pc = 0x2164ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2164A8u;
            // 0x2164ac: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216478u;
    goto label_216478;
    ctx->pc = 0x2164B0u;
label_2164b0:
    // 0x2164b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2164b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2164b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2164b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2164B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2164BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2164B8u;
            // 0x2164bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2164C0u;
label_2164c0:
    // 0x2164c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2164c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2164c4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2164c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2164c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2164c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2164cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2164ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2164d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2164d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2164d4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x2164d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2164d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2164d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164dc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2164dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2164e0: 0xc08591e  jal         func_216478
    ctx->pc = 0x2164E0u;
    SET_GPR_U32(ctx, 31, 0x2164E8u);
    ctx->pc = 0x2164E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2164E0u;
            // 0x2164e4: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216478u;
    goto label_216478;
    ctx->pc = 0x2164E8u;
label_2164e8:
    // 0x2164e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2164e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2164ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2164ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2164f0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2164f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2164f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2164f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2164f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2164f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2164fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2164FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2164FCu;
            // 0x216500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216504u;
    // 0x216504: 0x0  nop
    ctx->pc = 0x216504u;
    // NOP
    ctx->pc = 0x216508u;
}
