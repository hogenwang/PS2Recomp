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

// Function: sub_00167670
// Address: 0x167670 - 0x167e00
void sub_00167670_0x167670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167670_0x167670");
#endif

    switch (ctx->pc) {
        case 0x1677dcu: goto label_1677dc;
        case 0x167848u: goto label_167848;
        case 0x16785cu: goto label_16785c;
        case 0x167888u: goto label_167888;
        case 0x167938u: goto label_167938;
        case 0x167ad4u: goto label_167ad4;
        case 0x167b14u: goto label_167b14;
        case 0x167bd0u: goto label_167bd0;
        case 0x167c6cu: goto label_167c6c;
        case 0x167c94u: goto label_167c94;
        default: break;
    }

    ctx->pc = 0x167670u;

    // 0x167670: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x167670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x167674: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x167674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x167678: 0x50620042  beql        $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x167678u;
    {
        const bool branch_taken_0x167678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167678) {
            ctx->pc = 0x16767Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167678u;
            // 0x16767c: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167784u;
            goto label_167784;
        }
    }
    ctx->pc = 0x167680u;
    // 0x167680: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x167680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x167684: 0x50620039  beql        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x167684u;
    {
        const bool branch_taken_0x167684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167684) {
            ctx->pc = 0x167688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167684u;
            // 0x167688: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16776Cu;
            goto label_16776c;
        }
    }
    ctx->pc = 0x16768Cu;
    // 0x16768c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x16768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x167690: 0x50620030  beql        $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x167690u;
    {
        const bool branch_taken_0x167690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167690) {
            ctx->pc = 0x167694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167690u;
            // 0x167694: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167754u;
            goto label_167754;
        }
    }
    ctx->pc = 0x167698u;
    // 0x167698: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x167698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16769c: 0x50620027  beql        $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x16769Cu;
    {
        const bool branch_taken_0x16769c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16769c) {
            ctx->pc = 0x1676A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16769Cu;
            // 0x1676a0: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16773Cu;
            goto label_16773c;
        }
    }
    ctx->pc = 0x1676A4u;
    // 0x1676a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1676a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1676a8: 0x5062001e  beql        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1676A8u;
    {
        const bool branch_taken_0x1676a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1676a8) {
            ctx->pc = 0x1676ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1676A8u;
            // 0x1676ac: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167724u;
            goto label_167724;
        }
    }
    ctx->pc = 0x1676B0u;
    // 0x1676b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1676b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1676b4: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1676B4u;
    {
        const bool branch_taken_0x1676b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1676b4) {
            ctx->pc = 0x1676B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1676B4u;
            // 0x1676b8: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16770Cu;
            goto label_16770c;
        }
    }
    ctx->pc = 0x1676BCu;
    // 0x1676bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1676bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1676c0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1676C0u;
    {
        const bool branch_taken_0x1676c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1676c0) {
            ctx->pc = 0x1676C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1676C0u;
            // 0x1676c4: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1676F4u;
            goto label_1676f4;
        }
    }
    ctx->pc = 0x1676C8u;
    // 0x1676c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1676c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1676cc: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1676CCu;
    {
        const bool branch_taken_0x1676cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1676cc) {
            ctx->pc = 0x1676D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1676CCu;
            // 0x1676d0: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1676DCu;
            goto label_1676dc;
        }
    }
    ctx->pc = 0x1676D4u;
    // 0x1676d4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1676D4u;
    {
        const bool branch_taken_0x1676d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676D4u;
        // 0x1676d8: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676d4) {
            ctx->pc = 0x16779Cu;
            goto label_16779c;
        }
    }
    ctx->pc = 0x1676DCu;
label_1676dc:
    // 0x1676dc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1676dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1676e0: 0x24422fd0  addiu       $v0, $v0, 0x2FD0
    ctx->pc = 0x1676e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12240));
    // 0x1676e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1676e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1676e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1676e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1676ec: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1676ECu;
    {
        const bool branch_taken_0x1676ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676ECu;
        // 0x1676f0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676ec) {
            ctx->pc = 0x1677B0u;
            goto label_1677b0;
        }
    }
    ctx->pc = 0x1676F4u;
label_1676f4:
    // 0x1676f4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1676f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1676f8: 0x24422fe8  addiu       $v0, $v0, 0x2FE8
    ctx->pc = 0x1676f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12264));
    // 0x1676fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1676fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167704: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x167704u;
    {
        const bool branch_taken_0x167704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167704u;
        // 0x167708: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167704) {
            ctx->pc = 0x1677B0u;
            goto label_1677b0;
        }
    }
    ctx->pc = 0x16770Cu;
label_16770c:
    // 0x16770c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x16770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x167710: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x167710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x167714: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167718: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16771c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x16771Cu;
    {
        const bool branch_taken_0x16771c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16771Cu;
        // 0x167720: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16771c) {
            ctx->pc = 0x1677B0u;
            goto label_1677b0;
        }
    }
    ctx->pc = 0x167724u;
label_167724:
    // 0x167724: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x167724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x167728: 0x24423008  addiu       $v0, $v0, 0x3008
    ctx->pc = 0x167728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12296));
    // 0x16772c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16772cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167734: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x167734u;
    {
        const bool branch_taken_0x167734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167734u;
        // 0x167738: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167734) {
            ctx->pc = 0x1677B0u;
            goto label_1677b0;
        }
    }
    ctx->pc = 0x16773Cu;
label_16773c:
    // 0x16773c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x16773cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x167740: 0x24422fd8  addiu       $v0, $v0, 0x2FD8
    ctx->pc = 0x167740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12248));
    // 0x167744: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16774c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16774Cu;
    {
        const bool branch_taken_0x16774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16774Cu;
        // 0x167750: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16774c) {
            ctx->pc = 0x1677B0u;
            goto label_1677b0;
        }
    }
    ctx->pc = 0x167754u;
label_167754:
    // 0x167754: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x167754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x167758: 0x24422fe0  addiu       $v0, $v0, 0x2FE0
    ctx->pc = 0x167758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12256));
    // 0x16775c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16775cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167764: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x167764u;
    {
        const bool branch_taken_0x167764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167764u;
        // 0x167768: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167764) {
            ctx->pc = 0x1677B0u;
            goto label_1677b0;
        }
    }
    ctx->pc = 0x16776Cu;
label_16776c:
    // 0x16776c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x16776cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x167770: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x167770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
    // 0x167774: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16777c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16777Cu;
    {
        const bool branch_taken_0x16777c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16777Cu;
        // 0x167780: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16777c) {
            ctx->pc = 0x1677B0u;
            goto label_1677b0;
        }
    }
    ctx->pc = 0x167784u;
label_167784:
    // 0x167784: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x167784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x167788: 0x24422ff8  addiu       $v0, $v0, 0x2FF8
    ctx->pc = 0x167788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12280));
    // 0x16778c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16778cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167794: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x167794u;
    {
        const bool branch_taken_0x167794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167794u;
        // 0x167798: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167794) {
            ctx->pc = 0x1677B0u;
            goto label_1677b0;
        }
    }
    ctx->pc = 0x16779Cu;
label_16779c:
    // 0x16779c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x16779cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1677a0: 0x24422fd0  addiu       $v0, $v0, 0x2FD0
    ctx->pc = 0x1677a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12240));
    // 0x1677a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1677a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1677a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1677a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1677ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1677acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1677b0:
    // 0x1677b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1677B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1677B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1677B8u;
    // 0x1677b8: 0x0  nop
    ctx->pc = 0x1677b8u;
    // NOP
    // 0x1677bc: 0x0  nop
    ctx->pc = 0x1677bcu;
    // NOP
    // 0x1677c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1677c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1677c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1677c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1677c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1677c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1677cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1677ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1677d0: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x1677d0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1677d4: 0xc059318  jal         func_164C60
    ctx->pc = 0x1677D4u;
    SET_GPR_U32(ctx, 31, 0x1677DCu);
    ctx->pc = 0x1677D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1677D4u;
    // 0x1677d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C60u, 0x1677D4u, 0x1677DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1677DCu;
label_1677dc:
    // 0x1677dc: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x1677dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x1677e0: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x1677e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x1677e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1677e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1677e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1677e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1677ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1677ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1677f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1677F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1677F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677F0u;
        // 0x1677f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1677F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1677F8u;
    // 0x1677f8: 0x0  nop
    ctx->pc = 0x1677f8u;
    // NOP
    // 0x1677fc: 0x0  nop
    ctx->pc = 0x1677fcu;
    // NOP
    // 0x167800: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x167800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x167804: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x167804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x167808: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x167808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16780c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16780cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x167810: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x167810u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167814: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x167814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x167818: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16781c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16781cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167820: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x167820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167824: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167828: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x167828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16782c: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x16782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x167830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167834: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x167834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167838: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x167838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x16783c: 0x29882  srl         $s3, $v0, 2
    ctx->pc = 0x16783cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x167840: 0xc063308  jal         func_18CC20
    ctx->pc = 0x167840u;
    SET_GPR_U32(ctx, 31, 0x167848u);
    ctx->pc = 0x167844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167840u;
    // 0x167844: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CC20u, 0x167840u, 0x167848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167848u;
label_167848:
    // 0x167848: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x167848u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16784c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16784cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167850: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167854: 0xc063308  jal         func_18CC20
    ctx->pc = 0x167854u;
    SET_GPR_U32(ctx, 31, 0x16785Cu);
    ctx->pc = 0x167858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167854u;
    // 0x167858: 0x14a43f  dsra32      $s4, $s4, 16 (Delay Slot)
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CC20u, 0x167854u, 0x16785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16785Cu;
label_16785c:
    // 0x16785c: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x16785cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x167860: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x167860u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x167864: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x167864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x167868: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x167868u;
    {
        const bool branch_taken_0x167868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167868u;
        // 0x16786c: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167868) {
            ctx->pc = 0x1678B0u;
            goto label_1678b0;
        }
    }
    ctx->pc = 0x167870u;
    // 0x167870: 0x924500f7  lbu         $a1, 0xF7($s2)
    ctx->pc = 0x167870u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
    // 0x167874: 0x964600ec  lhu         $a2, 0xEC($s2)
    ctx->pc = 0x167874u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x167878: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x167878u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16787c: 0x8e4800f8  lw          $t0, 0xF8($s2)
    ctx->pc = 0x16787cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x167880: 0xc059f80  jal         func_167E00
    ctx->pc = 0x167880u;
    SET_GPR_U32(ctx, 31, 0x167888u);
    ctx->pc = 0x167884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167880u;
    // 0x167884: 0x964400ea  lhu         $a0, 0xEA($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167E00u, 0x167880u, 0x167888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167888u;
label_167888:
    // 0x167888: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x167888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16788c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x16788cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x167890: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x167890u;
    {
        const bool branch_taken_0x167890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167890) {
            ctx->pc = 0x167894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167890u;
            // 0x167894: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1678A0u;
            goto label_1678a0;
        }
    }
    ctx->pc = 0x167898u;
    // 0x167898: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x167898u;
    {
        const bool branch_taken_0x167898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167898u;
        // 0x16789c: 0x92230022  lbu         $v1, 0x22($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167898) {
            ctx->pc = 0x1678B4u;
            goto label_1678b4;
        }
    }
    ctx->pc = 0x1678A0u;
label_1678a0:
    // 0x1678a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1678A0u;
    {
        const bool branch_taken_0x1678a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1678a0) {
            ctx->pc = 0x1678A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1678A0u;
            // 0x1678a4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1678B0u;
            goto label_1678b0;
        }
    }
    ctx->pc = 0x1678A8u;
    // 0x1678a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1678A8u;
    {
        const bool branch_taken_0x1678a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1678a8) {
            ctx->pc = 0x1678B0u;
            goto label_1678b0;
        }
    }
    ctx->pc = 0x1678B0u;
label_1678b0:
    // 0x1678b0: 0x92230022  lbu         $v1, 0x22($s1)
    ctx->pc = 0x1678b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_1678b4:
    // 0x1678b4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1678b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1678b8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1678b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1678bc: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x1678bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1678c0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1678c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1678c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1678c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1678c8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1678c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1678cc: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1678ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1678d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1678d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1678d4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1678d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1678d8: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1678d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1678dc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1678DCu;
    {
        const bool branch_taken_0x1678dc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1678E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678DCu;
        // 0x1678e0: 0x2a4202d  daddu       $a0, $s5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678dc) {
            ctx->pc = 0x1678ECu;
            goto label_1678ec;
        }
    }
    ctx->pc = 0x1678E4u;
    // 0x1678e4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1678e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1678e8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1678e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1678ec:
    // 0x1678ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1678ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1678f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1678f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1678f4: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x1678f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1678f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1678f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1678fc: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1678fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x167900: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x167900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x167904: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x167904u;
    {
        const bool branch_taken_0x167904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167904) {
            ctx->pc = 0x167908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167904u;
            // 0x167908: 0x9222002a  lbu         $v0, 0x2A($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167914u;
            goto label_167914;
        }
    }
    ctx->pc = 0x16790Cu;
    // 0x16790c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16790cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x167910: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x167910u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_167914:
    // 0x167914: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x167914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x167918: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x167918u;
    {
        const bool branch_taken_0x167918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167918u;
        // 0x16791c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167918) {
            ctx->pc = 0x167960u;
            goto label_167960;
        }
    }
    ctx->pc = 0x167920u;
    // 0x167920: 0x924500f7  lbu         $a1, 0xF7($s2)
    ctx->pc = 0x167920u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
    // 0x167924: 0x964600ec  lhu         $a2, 0xEC($s2)
    ctx->pc = 0x167924u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x167928: 0x8e4800f8  lw          $t0, 0xF8($s2)
    ctx->pc = 0x167928u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x16792c: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x16792cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167930: 0xc059f80  jal         func_167E00
    ctx->pc = 0x167930u;
    SET_GPR_U32(ctx, 31, 0x167938u);
    ctx->pc = 0x167934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167930u;
    // 0x167934: 0x964400ea  lhu         $a0, 0xEA($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167E00u, 0x167930u, 0x167938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167938u;
label_167938:
    // 0x167938: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x167938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16793c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x16793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x167940: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x167940u;
    {
        const bool branch_taken_0x167940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167940) {
            ctx->pc = 0x167944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167940u;
            // 0x167944: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167950u;
            goto label_167950;
        }
    }
    ctx->pc = 0x167948u;
    // 0x167948: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x167948u;
    {
        const bool branch_taken_0x167948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167948u;
        // 0x16794c: 0x24140070  addiu       $s4, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167948) {
            ctx->pc = 0x167960u;
            goto label_167960;
        }
    }
    ctx->pc = 0x167950u;
label_167950:
    // 0x167950: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x167950u;
    {
        const bool branch_taken_0x167950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167950) {
            ctx->pc = 0x167954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167950u;
            // 0x167954: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167960u;
            goto label_167960;
        }
    }
    ctx->pc = 0x167958u;
    // 0x167958: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x167958u;
    {
        const bool branch_taken_0x167958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167958u;
        // 0x16795c: 0x24140070  addiu       $s4, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167958) {
            ctx->pc = 0x167960u;
            goto label_167960;
        }
    }
    ctx->pc = 0x167960u;
label_167960:
    // 0x167960: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x167960u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x167964: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x167964u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x167968: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x167968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x16796c: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x16796cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x167970: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x167970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x167974: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x167974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167978: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x167978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16797c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x16797cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x167980: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x167980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x167984: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x167984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x167988: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x167988u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x16798c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16798Cu;
    {
        const bool branch_taken_0x16798c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x167990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16798Cu;
        // 0x167990: 0x284202d  daddu       $a0, $s4, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16798c) {
            ctx->pc = 0x16799Cu;
            goto label_16799c;
        }
    }
    ctx->pc = 0x167994u;
    // 0x167994: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x167994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x167998: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x167998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_16799c:
    // 0x16799c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x16799cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1679a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1679a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1679a4: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x1679a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1679a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1679a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1679ac: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1679acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1679b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1679b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1679b4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1679B4u;
    {
        const bool branch_taken_0x1679b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1679b4) {
            ctx->pc = 0x1679B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1679B4u;
            // 0x1679b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1679C4u;
            goto label_1679c4;
        }
    }
    ctx->pc = 0x1679BCu;
    // 0x1679bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1679bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1679c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1679c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1679c4:
    // 0x1679c4: 0x56020002  bnel        $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1679C4u;
    {
        const bool branch_taken_0x1679c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1679c4) {
            ctx->pc = 0x1679C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1679C4u;
            // 0x1679c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1679D0u;
            goto label_1679d0;
        }
    }
    ctx->pc = 0x1679CCu;
    // 0x1679cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1679ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1679d0:
    // 0x1679d0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1679d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1679d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1679d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1679d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1679d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1679dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1679dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1679e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1679e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1679e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1679e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1679e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1679e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1679ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1679ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1679F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679ECu;
        // 0x1679f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1679ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1679F4u;
    // 0x1679f4: 0x0  nop
    ctx->pc = 0x1679f4u;
    // NOP
    // 0x1679f8: 0x0  nop
    ctx->pc = 0x1679f8u;
    // NOP
    // 0x1679fc: 0x0  nop
    ctx->pc = 0x1679fcu;
    // NOP
    // 0x167a00: 0x90a3001e  lbu         $v1, 0x1E($a1)
    ctx->pc = 0x167a00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x167a04: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x167A04u;
    {
        const bool branch_taken_0x167a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a04) {
            ctx->pc = 0x167A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167A04u;
            // 0x167a08: 0x90a6001f  lbu         $a2, 0x1F($a1) (Delay Slot)
            SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 31)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167A54u;
            goto label_167a54;
        }
    }
    ctx->pc = 0x167A0Cu;
    // 0x167a0c: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x167a0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x167a10: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x167a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x167a14: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x167A14u;
    {
        const bool branch_taken_0x167a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a14) {
            ctx->pc = 0x167A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167A14u;
            // 0x167a18: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167A38u;
            goto label_167a38;
        }
    }
    ctx->pc = 0x167A1Cu;
    // 0x167a1c: 0x908203e9  lbu         $v0, 0x3E9($a0)
    ctx->pc = 0x167a1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1001)));
    // 0x167a20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x167a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x167a24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x167a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x167a28: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x167A28u;
    {
        const bool branch_taken_0x167a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167a28) {
            ctx->pc = 0x167A50u;
            goto label_167a50;
        }
    }
    ctx->pc = 0x167A30u;
    // 0x167a30: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x167A30u;
    {
        const bool branch_taken_0x167a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A30u;
        // 0x167a34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a30) {
            ctx->pc = 0x167AA4u;
            goto label_167aa4;
        }
    }
    ctx->pc = 0x167A38u;
label_167a38:
    // 0x167a38: 0x908303e9  lbu         $v1, 0x3E9($a0)
    ctx->pc = 0x167a38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1001)));
    // 0x167a3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x167a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x167a40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167A40u;
    {
        const bool branch_taken_0x167a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a40) {
            ctx->pc = 0x167A50u;
            goto label_167a50;
        }
    }
    ctx->pc = 0x167A48u;
    // 0x167a48: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x167A48u;
    {
        const bool branch_taken_0x167a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A48u;
        // 0x167a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a48) {
            ctx->pc = 0x167AA4u;
            goto label_167aa4;
        }
    }
    ctx->pc = 0x167A50u;
label_167a50:
    // 0x167a50: 0x90a6001f  lbu         $a2, 0x1F($a1)
    ctx->pc = 0x167a50u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 31)));
label_167a54:
    // 0x167a54: 0x50c00013  beql        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x167A54u;
    {
        const bool branch_taken_0x167a54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a54) {
            ctx->pc = 0x167A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167A54u;
            // 0x167a58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167AA4u;
            goto label_167aa4;
        }
    }
    ctx->pc = 0x167A5Cu;
    // 0x167a5c: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x167a5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x167a60: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x167a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x167a64: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x167A64u;
    {
        const bool branch_taken_0x167a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a64) {
            ctx->pc = 0x167A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167A64u;
            // 0x167a68: 0x908303e9  lbu         $v1, 0x3E9($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1001)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167A88u;
            goto label_167a88;
        }
    }
    ctx->pc = 0x167A6Cu;
    // 0x167a6c: 0x908203e9  lbu         $v0, 0x3E9($a0)
    ctx->pc = 0x167a6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1001)));
    // 0x167a70: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x167a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x167a74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x167a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x167a78: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x167A78u;
    {
        const bool branch_taken_0x167a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167a78) {
            ctx->pc = 0x167AA0u;
            goto label_167aa0;
        }
    }
    ctx->pc = 0x167A80u;
    // 0x167a80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x167A80u;
    {
        const bool branch_taken_0x167a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A80u;
        // 0x167a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a80) {
            ctx->pc = 0x167AA4u;
            goto label_167aa4;
        }
    }
    ctx->pc = 0x167A88u;
label_167a88:
    // 0x167a88: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x167a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x167a8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x167a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x167a90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167A90u;
    {
        const bool branch_taken_0x167a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167a90) {
            ctx->pc = 0x167AA0u;
            goto label_167aa0;
        }
    }
    ctx->pc = 0x167A98u;
    // 0x167a98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x167A98u;
    {
        const bool branch_taken_0x167a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A98u;
        // 0x167a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a98) {
            ctx->pc = 0x167AA4u;
            goto label_167aa4;
        }
    }
    ctx->pc = 0x167AA0u;
label_167aa0:
    // 0x167aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167aa4:
    // 0x167aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x167AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167AACu;
    // 0x167aac: 0x0  nop
    ctx->pc = 0x167aacu;
    // NOP
    // 0x167ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x167ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167ab4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x167ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x167ab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x167abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167ac0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x167ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ac4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167ac8: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x167ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x167acc: 0xc062804  jal         func_18A010
    ctx->pc = 0x167ACCu;
    SET_GPR_U32(ctx, 31, 0x167AD4u);
    ctx->pc = 0x167AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167ACCu;
    // 0x167ad0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x167ACCu, 0x167AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AD4u;
label_167ad4:
    // 0x167ad4: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x167ad4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x167ad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x167ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167adc: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x167adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x167ae0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x167AE0u;
    {
        const bool branch_taken_0x167ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167ae0) {
            ctx->pc = 0x167AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167AE0u;
            // 0x167ae4: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167B04u;
            goto label_167b04;
        }
    }
    ctx->pc = 0x167AE8u;
    // 0x167ae8: 0x8e420490  lw          $v0, 0x490($s2)
    ctx->pc = 0x167ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
    // 0x167aec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x167aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x167af0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167AF0u;
    {
        const bool branch_taken_0x167af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167af0) {
            ctx->pc = 0x167B00u;
            goto label_167b00;
        }
    }
    ctx->pc = 0x167AF8u;
    // 0x167af8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x167AF8u;
    {
        const bool branch_taken_0x167af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AF8u;
        // 0x167afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167af8) {
            ctx->pc = 0x167B98u;
            goto label_167b98;
        }
    }
    ctx->pc = 0x167B00u;
label_167b00:
    // 0x167b00: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x167b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_167b04:
    // 0x167b04: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x167B04u;
    {
        const bool branch_taken_0x167b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167b04) {
            ctx->pc = 0x167B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167B04u;
            // 0x167b08: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167B28u;
            goto label_167b28;
        }
    }
    ctx->pc = 0x167B0Cu;
    // 0x167b0c: 0xc062f08  jal         func_18BC20
    ctx->pc = 0x167B0Cu;
    SET_GPR_U32(ctx, 31, 0x167B14u);
    ctx->pc = 0x167B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B0Cu;
    // 0x167b10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BC20u, 0x167B0Cu, 0x167B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B14u;
label_167b14:
    // 0x167b14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167B14u;
    {
        const bool branch_taken_0x167b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167b14) {
            ctx->pc = 0x167B24u;
            goto label_167b24;
        }
    }
    ctx->pc = 0x167B1Cu;
    // 0x167b1c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x167B1Cu;
    {
        const bool branch_taken_0x167b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B1Cu;
        // 0x167b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b1c) {
            ctx->pc = 0x167B98u;
            goto label_167b98;
        }
    }
    ctx->pc = 0x167B24u;
label_167b24:
    // 0x167b24: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x167b24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_167b28:
    // 0x167b28: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x167b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x167b2c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x167B2Cu;
    {
        const bool branch_taken_0x167b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167b2c) {
            ctx->pc = 0x167B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167B2Cu;
            // 0x167b30: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167B50u;
            goto label_167b50;
        }
    }
    ctx->pc = 0x167B34u;
    // 0x167b34: 0x8e020494  lw          $v0, 0x494($s0)
    ctx->pc = 0x167b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x167b38: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x167b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x167b3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167B3Cu;
    {
        const bool branch_taken_0x167b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167b3c) {
            ctx->pc = 0x167B4Cu;
            goto label_167b4c;
        }
    }
    ctx->pc = 0x167B44u;
    // 0x167b44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x167B44u;
    {
        const bool branch_taken_0x167b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B44u;
        // 0x167b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b44) {
            ctx->pc = 0x167B98u;
            goto label_167b98;
        }
    }
    ctx->pc = 0x167B4Cu;
label_167b4c:
    // 0x167b4c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x167b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_167b50:
    // 0x167b50: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x167B50u;
    {
        const bool branch_taken_0x167b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167b50) {
            ctx->pc = 0x167B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167B50u;
            // 0x167b54: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167B74u;
            goto label_167b74;
        }
    }
    ctx->pc = 0x167B58u;
    // 0x167b58: 0x8e020494  lw          $v0, 0x494($s0)
    ctx->pc = 0x167b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x167b5c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x167b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x167b60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167B60u;
    {
        const bool branch_taken_0x167b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167b60) {
            ctx->pc = 0x167B70u;
            goto label_167b70;
        }
    }
    ctx->pc = 0x167B68u;
    // 0x167b68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x167B68u;
    {
        const bool branch_taken_0x167b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B68u;
        // 0x167b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b68) {
            ctx->pc = 0x167B98u;
            goto label_167b98;
        }
    }
    ctx->pc = 0x167B70u;
label_167b70:
    // 0x167b70: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x167b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_167b74:
    // 0x167b74: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x167B74u;
    {
        const bool branch_taken_0x167b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167b74) {
            ctx->pc = 0x167B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167B74u;
            // 0x167b78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167B98u;
            goto label_167b98;
        }
    }
    ctx->pc = 0x167B7Cu;
    // 0x167b7c: 0x8e020494  lw          $v0, 0x494($s0)
    ctx->pc = 0x167b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x167b80: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x167b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x167b84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167B84u;
    {
        const bool branch_taken_0x167b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167b84) {
            ctx->pc = 0x167B94u;
            goto label_167b94;
        }
    }
    ctx->pc = 0x167B8Cu;
    // 0x167b8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x167B8Cu;
    {
        const bool branch_taken_0x167b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B8Cu;
        // 0x167b90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b8c) {
            ctx->pc = 0x167B98u;
            goto label_167b98;
        }
    }
    ctx->pc = 0x167B94u;
label_167b94:
    // 0x167b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167b98:
    // 0x167b98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x167b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x167BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BA8u;
        // 0x167bac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167BB0u;
    // 0x167bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x167bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167bc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x167bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167bc4: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x167bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x167bc8: 0xc062804  jal         func_18A010
    ctx->pc = 0x167BC8u;
    SET_GPR_U32(ctx, 31, 0x167BD0u);
    ctx->pc = 0x167BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BC8u;
    // 0x167bcc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x167BC8u, 0x167BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BD0u;
label_167bd0:
    // 0x167bd0: 0x92240026  lbu         $a0, 0x26($s1)
    ctx->pc = 0x167bd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x167bd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x167bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167bd8: 0x50830011  beql        $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x167BD8u;
    {
        const bool branch_taken_0x167bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x167bd8) {
            ctx->pc = 0x167BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167BD8u;
            // 0x167bdc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167C20u;
            goto label_167c20;
        }
    }
    ctx->pc = 0x167BE0u;
    // 0x167be0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167be4: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x167BE4u;
    {
        const bool branch_taken_0x167be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x167be4) {
            ctx->pc = 0x167BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167BE4u;
            // 0x167be8: 0x8c420490  lw          $v0, 0x490($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167C10u;
            goto label_167c10;
        }
    }
    ctx->pc = 0x167BECu;
    // 0x167bec: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x167BECu;
    {
        const bool branch_taken_0x167bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x167bec) {
            ctx->pc = 0x167BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167BECu;
            // 0x167bf0: 0x8c420490  lw          $v0, 0x490($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167BFCu;
            goto label_167bfc;
        }
    }
    ctx->pc = 0x167BF4u;
    // 0x167bf4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x167BF4u;
    {
        const bool branch_taken_0x167bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BF4u;
        // 0x167bf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167bf4) {
            ctx->pc = 0x167C24u;
            goto label_167c24;
        }
    }
    ctx->pc = 0x167BFCu;
label_167bfc:
    // 0x167bfc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x167bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x167c00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x167C00u;
    {
        const bool branch_taken_0x167c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167c00) {
            ctx->pc = 0x167C20u;
            goto label_167c20;
        }
    }
    ctx->pc = 0x167C08u;
    // 0x167c08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x167C08u;
    {
        const bool branch_taken_0x167c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C08u;
        // 0x167c0c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c08) {
            ctx->pc = 0x167C20u;
            goto label_167c20;
        }
    }
    ctx->pc = 0x167C10u;
label_167c10:
    // 0x167c10: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x167c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x167c14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x167C14u;
    {
        const bool branch_taken_0x167c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c14) {
            ctx->pc = 0x167C20u;
            goto label_167c20;
        }
    }
    ctx->pc = 0x167C1Cu;
    // 0x167c1c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x167c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_167c20:
    // 0x167c20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167c24:
    // 0x167c24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167c28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167c2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167c30: 0x3e00008  jr          $ra
    ctx->pc = 0x167C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C30u;
        // 0x167c34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167C38u;
    // 0x167c38: 0x0  nop
    ctx->pc = 0x167c38u;
    // NOP
    // 0x167c3c: 0x0  nop
    ctx->pc = 0x167c3cu;
    // NOP
    // 0x167c40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x167c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x167c44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x167c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x167c48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x167c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x167c4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x167c50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x167c50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167c58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x167c58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167c60: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x167c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x167c64: 0xc062804  jal         func_18A010
    ctx->pc = 0x167C64u;
    SET_GPR_U32(ctx, 31, 0x167C6Cu);
    ctx->pc = 0x167C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167C64u;
    // 0x167c68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x167C64u, 0x167C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C6Cu;
label_167c6c:
    // 0x167c6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x167c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c70: 0x86420018  lh          $v0, 0x18($s2)
    ctx->pc = 0x167c70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x167c74: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x167C74u;
    {
        const bool branch_taken_0x167c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c74) {
            ctx->pc = 0x167C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167C74u;
            // 0x167c78: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167CF0u;
            goto label_167cf0;
        }
    }
    ctx->pc = 0x167C7Cu;
    // 0x167c7c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x167c7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167c80: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x167c80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x167c84: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x167c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167c8c: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x167C8Cu;
    SET_GPR_U32(ctx, 31, 0x167C94u);
    ctx->pc = 0x167C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167C8Cu;
    // 0x167c90: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x167C8Cu, 0x167C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C94u;
label_167c94:
    // 0x167c94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x167c94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x167c98: 0x92420027  lbu         $v0, 0x27($s2)
    ctx->pc = 0x167c98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 39)));
    // 0x167c9c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x167c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x167ca0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x167ca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x167ca4: 0x0  nop
    ctx->pc = 0x167ca4u;
    // NOP
    // 0x167ca8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x167ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x167cac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x167CACu;
    {
        const bool branch_taken_0x167cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CACu;
        // 0x167cb0: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cac) {
            ctx->pc = 0x167CD4u;
            goto label_167cd4;
        }
    }
    ctx->pc = 0x167CB4u;
    // 0x167cb4: 0x86420018  lh          $v0, 0x18($s2)
    ctx->pc = 0x167cb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x167cb8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x167cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x167cbc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167cbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167cc0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x167cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x167cc4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x167CC4u;
    {
        const bool branch_taken_0x167cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167cc4) {
            ctx->pc = 0x167CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167CC4u;
            // 0x167cc8: 0x96420014  lhu         $v0, 0x14($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167CF4u;
            goto label_167cf4;
        }
    }
    ctx->pc = 0x167CCCu;
    // 0x167ccc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x167CCCu;
    {
        const bool branch_taken_0x167ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CCCu;
        // 0x167cd0: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ccc) {
            ctx->pc = 0x167CF0u;
            goto label_167cf0;
        }
    }
    ctx->pc = 0x167CD4u;
label_167cd4:
    // 0x167cd4: 0x86420018  lh          $v0, 0x18($s2)
    ctx->pc = 0x167cd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x167cd8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x167cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x167cdc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167cdcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167ce0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x167ce0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x167ce4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x167CE4u;
    {
        const bool branch_taken_0x167ce4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x167ce4) {
            ctx->pc = 0x167CF0u;
            goto label_167cf0;
        }
    }
    ctx->pc = 0x167CECu;
    // 0x167cec: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x167cecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_167cf0:
    // 0x167cf0: 0x96420014  lhu         $v0, 0x14($s2)
    ctx->pc = 0x167cf0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_167cf4:
    // 0x167cf4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x167CF4u;
    {
        const bool branch_taken_0x167cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167cf4) {
            ctx->pc = 0x167CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167CF4u;
            // 0x167cf8: 0x36100002  ori         $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167D58u;
            goto label_167d58;
        }
    }
    ctx->pc = 0x167CFCu;
    // 0x167cfc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x167cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x167d00: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x167d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x167d04: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x167d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167d08: 0x92420027  lbu         $v0, 0x27($s2)
    ctx->pc = 0x167d08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 39)));
    // 0x167d0c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x167d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x167d10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x167d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x167d14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x167D14u;
    {
        const bool branch_taken_0x167d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D14u;
        // 0x167d18: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d14) {
            ctx->pc = 0x167D3Cu;
            goto label_167d3c;
        }
    }
    ctx->pc = 0x167D1Cu;
    // 0x167d1c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x167d1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x167d20: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x167d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x167d24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x167d24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x167d28: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x167d28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x167d2c: 0x5420000b  bnel        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x167D2Cu;
    {
        const bool branch_taken_0x167d2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d2c) {
            ctx->pc = 0x167D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167D2Cu;
            // 0x167d30: 0x96420016  lhu         $v0, 0x16($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167D5Cu;
            goto label_167d5c;
        }
    }
    ctx->pc = 0x167D34u;
    // 0x167d34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x167D34u;
    {
        const bool branch_taken_0x167d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D34u;
        // 0x167d38: 0x36100002  ori         $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d34) {
            ctx->pc = 0x167D58u;
            goto label_167d58;
        }
    }
    ctx->pc = 0x167D3Cu;
label_167d3c:
    // 0x167d3c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x167d3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x167d40: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x167d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x167d44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x167d44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x167d48: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x167d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x167d4c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x167D4Cu;
    {
        const bool branch_taken_0x167d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d4c) {
            ctx->pc = 0x167D58u;
            goto label_167d58;
        }
    }
    ctx->pc = 0x167D54u;
    // 0x167d54: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x167d54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_167d58:
    // 0x167d58: 0x96420016  lhu         $v0, 0x16($s2)
    ctx->pc = 0x167d58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_167d5c:
    // 0x167d5c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x167D5Cu;
    {
        const bool branch_taken_0x167d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167d5c) {
            ctx->pc = 0x167D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167D5Cu;
            // 0x167d60: 0x36100004  ori         $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167DC0u;
            goto label_167dc0;
        }
    }
    ctx->pc = 0x167D64u;
    // 0x167d64: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x167d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x167d68: 0x240402a0  addiu       $a0, $zero, 0x2A0
    ctx->pc = 0x167d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x167d6c: 0x92420027  lbu         $v0, 0x27($s2)
    ctx->pc = 0x167d6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 39)));
    // 0x167d70: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x167d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167d74: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x167d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x167d78: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x167d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x167d7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x167D7Cu;
    {
        const bool branch_taken_0x167d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D7Cu;
        // 0x167d80: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d7c) {
            ctx->pc = 0x167DA4u;
            goto label_167da4;
        }
    }
    ctx->pc = 0x167D84u;
    // 0x167d84: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x167d84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x167d88: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x167d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x167d8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x167d8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x167d90: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x167d90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x167d94: 0x5420000b  bnel        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x167D94u;
    {
        const bool branch_taken_0x167d94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d94) {
            ctx->pc = 0x167D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167D94u;
            // 0x167d98: 0x3a020007  xori        $v0, $s0, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167DC4u;
            goto label_167dc4;
        }
    }
    ctx->pc = 0x167D9Cu;
    // 0x167d9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x167D9Cu;
    {
        const bool branch_taken_0x167d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D9Cu;
        // 0x167da0: 0x36100004  ori         $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d9c) {
            ctx->pc = 0x167DC0u;
            goto label_167dc0;
        }
    }
    ctx->pc = 0x167DA4u;
label_167da4:
    // 0x167da4: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x167da4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x167da8: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x167da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x167dac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x167dacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x167db0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x167db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x167db4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x167DB4u;
    {
        const bool branch_taken_0x167db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167db4) {
            ctx->pc = 0x167DC0u;
            goto label_167dc0;
        }
    }
    ctx->pc = 0x167DBCu;
    // 0x167dbc: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x167dbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_167dc0:
    // 0x167dc0: 0x3a020007  xori        $v0, $s0, 0x7
    ctx->pc = 0x167dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)7);
label_167dc4:
    // 0x167dc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x167dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167dc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x167dc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167dcc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x167dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x167dd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167dd4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x167dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x167dd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167de0: 0x3e00008  jr          $ra
    ctx->pc = 0x167DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DE0u;
        // 0x167de4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167DE8u;
    // 0x167de8: 0x0  nop
    ctx->pc = 0x167de8u;
    // NOP
    // 0x167dec: 0x0  nop
    ctx->pc = 0x167decu;
    // NOP
    // 0x167df0: 0x3e00008  jr          $ra
    ctx->pc = 0x167DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DF0u;
        // 0x167df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167DF8u;
    // 0x167df8: 0x0  nop
    ctx->pc = 0x167df8u;
    // NOP
    // 0x167dfc: 0x0  nop
    ctx->pc = 0x167dfcu;
    // NOP
}
