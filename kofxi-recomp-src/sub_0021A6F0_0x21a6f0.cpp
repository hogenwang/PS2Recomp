#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021A6F0
// Address: 0x21a6f0 - 0x21a780
void sub_0021A6F0_0x21a6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A6F0_0x21a6f0");
#endif

    switch (ctx->pc) {
        case 0x21a710u: goto label_21a710;
        case 0x21a728u: goto label_21a728;
        case 0x21a738u: goto label_21a738;
        case 0x21a760u: goto label_21a760;
        default: break;
    }

    ctx->pc = 0x21a6f0u;

label_21a6f0:
    // 0x21a6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a6f4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a6f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a6fc: 0x248414a0  addiu       $a0, $a0, 0x14A0
    ctx->pc = 0x21a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5280));
    // 0x21a700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a704: 0x8043e52  j           func_10F948
    ctx->pc = 0x21A704u;
    ctx->pc = 0x21A708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A704u;
            // 0x21a708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21A70Cu;
    // 0x21a70c: 0x0  nop
    ctx->pc = 0x21a70cu;
    // NOP
label_21a710:
    // 0x21a710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a714: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21a714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a718: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a718u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a71c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a720: 0xc0869bc  jal         func_21A6F0
    ctx->pc = 0x21A720u;
    SET_GPR_U32(ctx, 31, 0x21A728u);
    ctx->pc = 0x21A724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A720u;
            // 0x21a724: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A6F0u;
    goto label_21a6f0;
    ctx->pc = 0x21A728u;
label_21a728:
    // 0x21a728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a72c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a730: 0x3e00008  jr          $ra
    ctx->pc = 0x21A730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A730u;
            // 0x21a734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A738u;
label_21a738:
    // 0x21a738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a73c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a73cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21a74c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21a74cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a750: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21a750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a754: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21a754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21a758: 0xc0869bc  jal         func_21A6F0
    ctx->pc = 0x21A758u;
    SET_GPR_U32(ctx, 31, 0x21A760u);
    ctx->pc = 0x21A75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A758u;
            // 0x21a75c: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A6F0u;
    goto label_21a6f0;
    ctx->pc = 0x21A760u;
label_21a760:
    // 0x21a760: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21a760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21a764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a768: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x21a768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21a76c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a774: 0x3e00008  jr          $ra
    ctx->pc = 0x21A774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A774u;
            // 0x21a778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A77Cu;
    // 0x21a77c: 0x0  nop
    ctx->pc = 0x21a77cu;
    // NOP
    ctx->pc = 0x21a780u;
}
