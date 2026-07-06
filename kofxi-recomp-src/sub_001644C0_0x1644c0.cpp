#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001644C0
// Address: 0x1644c0 - 0x164550
void sub_001644C0_0x1644c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001644C0_0x1644c0");
#endif

    switch (ctx->pc) {
        case 0x16450cu: goto label_16450c;
        default: break;
    }

    ctx->pc = 0x1644c0u;

    // 0x1644c0: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x1644c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x1644c4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1644c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1644c8: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x1644c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1644cc: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x1644ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    // 0x1644d0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1644d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1644d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1644d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644d8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1644d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1644dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1644dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644e0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1644e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1644e4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1644e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1644e8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1644e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1644ec: 0x9067f35b  lbu         $a3, -0xCA5($v1)
    ctx->pc = 0x1644ecu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964059)));
    // 0x1644f0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1644f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1644f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1644f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1644f8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1644f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1644fc: 0xc34021  addu        $t0, $a2, $v1
    ctx->pc = 0x1644fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x164500: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x164500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x164504: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x164504u;
    {
        const bool branch_taken_0x164504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164504u;
            // 0x164508: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164504) {
            ctx->pc = 0x164528u;
            goto label_164528;
        }
    }
    ctx->pc = 0x16450Cu;
label_16450c:
    // 0x16450c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16450Cu;
    {
        const bool branch_taken_0x16450c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16450c) {
            ctx->pc = 0x164520u;
            goto label_164520;
        }
    }
    ctx->pc = 0x164514u;
    // 0x164514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164518: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x164518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16451c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16451cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_164520:
    // 0x164520: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x164520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x164524: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x164524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_164528:
    // 0x164528: 0x50e60002  beql        $a3, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x164528u;
    {
        const bool branch_taken_0x164528 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x164528) {
            ctx->pc = 0x16452Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164528u;
            // 0x16452c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164534u;
            goto label_164534;
        }
    }
    ctx->pc = 0x164530u;
    // 0x164530: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x164530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_164534:
    // 0x164534: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x164534u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x164538: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x164538u;
    {
        const bool branch_taken_0x164538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164538) {
            ctx->pc = 0x16453Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164538u;
            // 0x16453c: 0x8d0300c0  lw          $v1, 0xC0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16450Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16450c;
        }
    }
    ctx->pc = 0x164540u;
    // 0x164540: 0x3e00008  jr          $ra
    ctx->pc = 0x164540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164548u;
    // 0x164548: 0x0  nop
    ctx->pc = 0x164548u;
    // NOP
    // 0x16454c: 0x0  nop
    ctx->pc = 0x16454cu;
    // NOP
    ctx->pc = 0x164550u;
}
