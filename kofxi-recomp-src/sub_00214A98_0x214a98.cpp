#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214A98
// Address: 0x214a98 - 0x214b28
void sub_00214A98_0x214a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214A98_0x214a98");
#endif

    switch (ctx->pc) {
        case 0x214ad0u: goto label_214ad0;
        case 0x214b08u: goto label_214b08;
        default: break;
    }

    ctx->pc = 0x214a98u;

label_214a98:
    // 0x214a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214a9c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214aa4: 0x24840968  addiu       $a0, $a0, 0x968
    ctx->pc = 0x214aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2408));
    // 0x214aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214aac: 0x8043e52  j           func_10F948
    ctx->pc = 0x214AACu;
    ctx->pc = 0x214AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AACu;
    // 0x214ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x214AB4u;
    // 0x214ab4: 0x0  nop
    ctx->pc = 0x214ab4u;
    // NOP
    // 0x214ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214abc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x214abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214ac0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x214ac0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x214ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214ac8: 0xc0852a6  jal         func_214A98
    ctx->pc = 0x214AC8u;
    SET_GPR_U32(ctx, 31, 0x214AD0u);
    ctx->pc = 0x214ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AC8u;
    // 0x214acc: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214A98u;
    goto label_214a98;
    ctx->pc = 0x214AD0u;
label_214ad0:
    // 0x214ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214ad4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x214ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x214AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AD8u;
        // 0x214adc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214AE0u;
    // 0x214ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214ae4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x214ae4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x214ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214aec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214af0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x214af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x214af4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x214af4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214af8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x214af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214afc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x214afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214b00: 0xc0852a6  jal         func_214A98
    ctx->pc = 0x214B00u;
    SET_GPR_U32(ctx, 31, 0x214B08u);
    ctx->pc = 0x214B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B00u;
    // 0x214b04: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214A98u;
    goto label_214a98;
    ctx->pc = 0x214B08u;
label_214b08:
    // 0x214b08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x214b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x214b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214b10: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x214b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x214b14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x214B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B1Cu;
        // 0x214b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214B24u;
    // 0x214b24: 0x0  nop
    ctx->pc = 0x214b24u;
    // NOP
    if (ctx->pc == 0x214b24u) { ctx->pc = 0x214b28u; }
}
