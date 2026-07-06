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

// Function: sub_00185420
// Address: 0x185420 - 0x1854f0
void sub_00185420_0x185420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185420_0x185420");
#endif

    switch (ctx->pc) {
        case 0x18547cu: goto label_18547c;
        default: break;
    }

    ctx->pc = 0x185420u;

    // 0x185420: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x185420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x185424: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x185424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x185428: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x185428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18542c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x18542Cu;
    {
        const bool branch_taken_0x18542c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18542c) {
            ctx->pc = 0x1854E0u;
            goto label_1854e0;
        }
    }
    ctx->pc = 0x185434u;
    // 0x185434: 0x8c8500dc  lw          $a1, 0xDC($a0)
    ctx->pc = 0x185434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x185438: 0x30a5000c  andi        $a1, $a1, 0xC
    ctx->pc = 0x185438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x18543c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18543cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x185440: 0x53082  srl         $a2, $a1, 2
    ctx->pc = 0x185440u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x185444: 0x2484db55  addiu       $a0, $a0, -0x24AB
    ctx->pc = 0x185444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957909));
    // 0x185448: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x185448u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18544c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18544cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x185450: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x185450u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x185454: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x185454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x185458: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x185458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18545c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18545cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x185460: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x185460u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x185464: 0x18c0001e  blez        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x185464u;
    {
        const bool branch_taken_0x185464 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x185468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185464u;
        // 0x185468: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185464) {
            ctx->pc = 0x1854E0u;
            goto label_1854e0;
        }
    }
    ctx->pc = 0x18546Cu;
    // 0x18546c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18546cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x185470: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x185470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x185474: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x185474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x185478: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x185478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18547c:
    // 0x18547c: 0x90e40028  lbu         $a0, 0x28($a3)
    ctx->pc = 0x18547cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x185480: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x185480u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x185484: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x185484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x185488: 0x8c840078  lw          $a0, 0x78($a0)
    ctx->pc = 0x185488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x18548c: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x18548Cu;
    {
        const bool branch_taken_0x18548c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18548c) {
            ctx->pc = 0x185490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18548Cu;
            // 0x185490: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1854D4u;
            goto label_1854d4;
        }
    }
    ctx->pc = 0x185494u;
    // 0x185494: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x185494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x185498: 0x8c840498  lw          $a0, 0x498($a0)
    ctx->pc = 0x185498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x18549c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x18549cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1854a0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1854A0u;
    {
        const bool branch_taken_0x1854a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1854a0) {
            ctx->pc = 0x1854D0u;
            goto label_1854d0;
        }
    }
    ctx->pc = 0x1854A8u;
    // 0x1854a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1854a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1854ac: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1854ACu;
    {
        const bool branch_taken_0x1854ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1854ac) {
            ctx->pc = 0x1854B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1854ACu;
            // 0x1854b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1854E4u;
            goto label_1854e4;
        }
    }
    ctx->pc = 0x1854B4u;
    // 0x1854b4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1854B4u;
    {
        const bool branch_taken_0x1854b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1854b4) {
            ctx->pc = 0x1854E4u;
            goto label_1854e4;
        }
    }
    ctx->pc = 0x1854BCu;
    // 0x1854bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1854BCu;
    {
        const bool branch_taken_0x1854bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1854bc) {
            ctx->pc = 0x1854E0u;
            goto label_1854e0;
        }
    }
    ctx->pc = 0x1854C4u;
    // 0x1854c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1854c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1854C8u;
    {
        const bool branch_taken_0x1854c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1854c8) {
            ctx->pc = 0x1854E4u;
            goto label_1854e4;
        }
    }
    ctx->pc = 0x1854D0u;
label_1854d0:
    // 0x1854d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1854d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1854d4:
    // 0x1854d4: 0x66202a  slt         $a0, $v1, $a2
    ctx->pc = 0x1854d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1854d8: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1854D8u;
    {
        const bool branch_taken_0x1854d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1854DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854D8u;
        // 0x1854dc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1854d8) {
            ctx->pc = 0x18547Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18547c;
        }
    }
    ctx->pc = 0x1854E0u;
label_1854e0:
    // 0x1854e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1854e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1854e4:
    // 0x1854e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1854E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1854E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1854ECu;
    // 0x1854ec: 0x0  nop
    ctx->pc = 0x1854ecu;
    // NOP
    if (ctx->pc == 0x1854ecu) { ctx->pc = 0x1854f0u; }
}
