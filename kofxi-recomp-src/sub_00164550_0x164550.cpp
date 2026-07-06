#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164550
// Address: 0x164550 - 0x1645e0
void sub_00164550_0x164550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164550_0x164550");
#endif

    switch (ctx->pc) {
        case 0x164598u: goto label_164598;
        default: break;
    }

    ctx->pc = 0x164550u;

    // 0x164550: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x164550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x164554: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x164554u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x164558: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x164558u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x16455c: 0x24e7db50  addiu       $a3, $a3, -0x24B0
    ctx->pc = 0x16455cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957904));
    // 0x164560: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x164560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164564: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x164564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164568: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x164568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x16456c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x16456cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x164570: 0x9046f35b  lbu         $a2, -0xCA5($v0)
    ctx->pc = 0x164570u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x164574: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164578: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x164578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16457c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x16457cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x164580: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x164580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x164584: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x164584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x164588: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x164588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16458c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x16458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x164590: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x164590u;
    {
        const bool branch_taken_0x164590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164590u;
            // 0x164594: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164590) {
            ctx->pc = 0x1645B0u;
            goto label_1645b0;
        }
    }
    ctx->pc = 0x164598u;
label_164598:
    // 0x164598: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x164598u;
    {
        const bool branch_taken_0x164598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164598) {
            ctx->pc = 0x16459Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164598u;
            // 0x16459c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1645ACu;
            goto label_1645ac;
        }
    }
    ctx->pc = 0x1645A0u;
    // 0x1645a0: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x1645a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1645a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1645A4u;
    {
        const bool branch_taken_0x1645a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1645A4u;
            // 0x1645a8: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645a4) {
            ctx->pc = 0x1645CCu;
            goto label_1645cc;
        }
    }
    ctx->pc = 0x1645ACu;
label_1645ac:
    // 0x1645ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1645acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1645b0:
    // 0x1645b0: 0x50c50002  beql        $a2, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1645B0u;
    {
        const bool branch_taken_0x1645b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1645b0) {
            ctx->pc = 0x1645B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1645B0u;
            // 0x1645b4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1645BCu;
            goto label_1645bc;
        }
    }
    ctx->pc = 0x1645B8u;
    // 0x1645b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1645b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1645bc:
    // 0x1645bc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x1645bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1645c0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1645C0u;
    {
        const bool branch_taken_0x1645c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1645c0) {
            ctx->pc = 0x1645C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1645C0u;
            // 0x1645c4: 0x8ce200c0  lw          $v0, 0xC0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164598;
        }
    }
    ctx->pc = 0x1645C8u;
    // 0x1645c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1645c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1645cc:
    // 0x1645cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1645CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1645D4u;
    // 0x1645d4: 0x0  nop
    ctx->pc = 0x1645d4u;
    // NOP
    // 0x1645d8: 0x0  nop
    ctx->pc = 0x1645d8u;
    // NOP
    // 0x1645dc: 0x0  nop
    ctx->pc = 0x1645dcu;
    // NOP
    ctx->pc = 0x1645e0u;
}
