#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00215458
// Address: 0x215458 - 0x2154e8
void sub_00215458_0x215458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215458_0x215458");
#endif

    switch (ctx->pc) {
        case 0x215478u: goto label_215478;
        case 0x215490u: goto label_215490;
        case 0x2154a0u: goto label_2154a0;
        case 0x2154c8u: goto label_2154c8;
        default: break;
    }

    ctx->pc = 0x215458u;

label_215458:
    // 0x215458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21545c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21545cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215464: 0x24840a78  addiu       $a0, $a0, 0xA78
    ctx->pc = 0x215464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2680));
    // 0x215468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21546c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21546Cu;
    ctx->pc = 0x215470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21546Cu;
            // 0x215470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x215474u;
    // 0x215474: 0x0  nop
    ctx->pc = 0x215474u;
    // NOP
label_215478:
    // 0x215478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21547c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21547cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x215480: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215480u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215488: 0xc085516  jal         func_215458
    ctx->pc = 0x215488u;
    SET_GPR_U32(ctx, 31, 0x215490u);
    ctx->pc = 0x21548Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215488u;
            // 0x21548c: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215458u;
    goto label_215458;
    ctx->pc = 0x215490u;
label_215490:
    // 0x215490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215494: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x215494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215498: 0x3e00008  jr          $ra
    ctx->pc = 0x215498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21549Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215498u;
            // 0x21549c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2154A0u;
label_2154a0:
    // 0x2154a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2154a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2154a4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2154a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2154a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2154a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2154ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2154acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2154b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2154b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2154b4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x2154b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2154b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2154b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2154bc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2154bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2154c0: 0xc085516  jal         func_215458
    ctx->pc = 0x2154C0u;
    SET_GPR_U32(ctx, 31, 0x2154C8u);
    ctx->pc = 0x2154C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2154C0u;
            // 0x2154c4: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215458u;
    goto label_215458;
    ctx->pc = 0x2154C8u;
label_2154c8:
    // 0x2154c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2154c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2154cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2154ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2154d0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2154d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2154d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2154d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2154d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2154d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2154dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2154DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2154E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2154DCu;
            // 0x2154e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2154E4u;
    // 0x2154e4: 0x0  nop
    ctx->pc = 0x2154e4u;
    // NOP
    ctx->pc = 0x2154e8u;
}
