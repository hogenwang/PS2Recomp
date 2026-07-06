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

// Function: sub_00307040
// Address: 0x307040 - 0x307170
void sub_00307040_0x307040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307040_0x307040");
#endif

    switch (ctx->pc) {
        case 0x3070b0u: goto label_3070b0;
        case 0x3070dcu: goto label_3070dc;
        case 0x3070e8u: goto label_3070e8;
        case 0x3070f4u: goto label_3070f4;
        case 0x3070fcu: goto label_3070fc;
        case 0x307144u: goto label_307144;
        case 0x307150u: goto label_307150;
        case 0x30715cu: goto label_30715c;
        case 0x307164u: goto label_307164;
        default: break;
    }

    ctx->pc = 0x307040u;

label_307040:
    // 0x307040: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x307040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x307044: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x307044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x307048: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x307048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30704c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30704cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x307050: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x307050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x307054: 0x24a5db53  addiu       $a1, $a1, -0x24AD
    ctx->pc = 0x307054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957907));
    // 0x307058: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x307058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30705c: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x30705cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x307060: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x307060u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x307064: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x307064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x307068: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x307068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x30706c: 0x9044f35b  lbu         $a0, -0xCA5($v0)
    ctx->pc = 0x30706cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x307070: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x307070u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307074: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x307074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x307078: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x307078u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x30707c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30707cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307080: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x307080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x307084: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x307084u;
    {
        const bool branch_taken_0x307084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x307088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307084u;
        // 0x307088: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307084) {
            ctx->pc = 0x307090u;
            goto label_307090;
        }
    }
    ctx->pc = 0x30708Cu;
    // 0x30708c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x30708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_307090:
    // 0x307090: 0x3e00008  jr          $ra
    ctx->pc = 0x307090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307098u;
    // 0x307098: 0x0  nop
    ctx->pc = 0x307098u;
    // NOP
    // 0x30709c: 0x0  nop
    ctx->pc = 0x30709cu;
    // NOP
    // 0x3070a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3070a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3070a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3070a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3070a8: 0xc0cc0cc  jal         func_330330
    ctx->pc = 0x3070A8u;
    SET_GPR_U32(ctx, 31, 0x3070B0u);
    ctx->pc = 0x330330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330330u, 0x3070A8u, 0x3070B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070B0u;
label_3070b0:
    // 0x3070b0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3070b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3070b4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3070b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3070b8: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x3070b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x3070bc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3070BCu;
    {
        const bool branch_taken_0x3070bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3070bc) {
            ctx->pc = 0x3070CCu;
            goto label_3070cc;
        }
    }
    ctx->pc = 0x3070C4u;
    // 0x3070c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3070C4u;
    {
        const bool branch_taken_0x3070c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3070C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070C4u;
        // 0x3070c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3070c4) {
            ctx->pc = 0x3070D4u;
            goto label_3070d4;
        }
    }
    ctx->pc = 0x3070CCu;
label_3070cc:
    // 0x3070cc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3070ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3070d0: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x3070d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_3070d4:
    // 0x3070d4: 0xc0c1c10  jal         func_307040
    ctx->pc = 0x3070D4u;
    SET_GPR_U32(ctx, 31, 0x3070DCu);
    ctx->pc = 0x307040u;
    goto label_307040;
    ctx->pc = 0x3070DCu;
label_3070dc:
    // 0x3070dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3070dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3070e0: 0xc0c4894  jal         func_312250
    ctx->pc = 0x3070E0u;
    SET_GPR_U32(ctx, 31, 0x3070E8u);
    ctx->pc = 0x3070E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3070E0u;
    // 0x3070e4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312250u, 0x3070E0u, 0x3070E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070E8u;
label_3070e8:
    // 0x3070e8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3070e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x3070ec: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x3070ECu;
    SET_GPR_U32(ctx, 31, 0x3070F4u);
    ctx->pc = 0x3070F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3070ECu;
    // 0x3070f0: 0x24847170  addiu       $a0, $a0, 0x7170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x3070ECu, 0x3070F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070F4u;
label_3070f4:
    // 0x3070f4: 0xc0c1c5c  jal         func_307170
    ctx->pc = 0x3070F4u;
    SET_GPR_U32(ctx, 31, 0x3070FCu);
    ctx->pc = 0x307170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307170u, 0x3070F4u, 0x3070FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070FCu;
label_3070fc:
    // 0x3070fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3070fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307100: 0x3e00008  jr          $ra
    ctx->pc = 0x307100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307100u;
        // 0x307104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307108u;
    // 0x307108: 0x0  nop
    ctx->pc = 0x307108u;
    // NOP
    // 0x30710c: 0x0  nop
    ctx->pc = 0x30710cu;
    // NOP
    // 0x307110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x307114: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x307114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x307118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30711c: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x30711cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x307120: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x307120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x307124: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307124u;
    {
        const bool branch_taken_0x307124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x307124) {
            ctx->pc = 0x307134u;
            goto label_307134;
        }
    }
    ctx->pc = 0x30712Cu;
    // 0x30712c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30712Cu;
    {
        const bool branch_taken_0x30712c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30712Cu;
        // 0x307130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30712c) {
            ctx->pc = 0x30713Cu;
            goto label_30713c;
        }
    }
    ctx->pc = 0x307134u;
label_307134:
    // 0x307134: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x307134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x307138: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x307138u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_30713c:
    // 0x30713c: 0xc0c1c10  jal         func_307040
    ctx->pc = 0x30713Cu;
    SET_GPR_U32(ctx, 31, 0x307144u);
    ctx->pc = 0x307040u;
    goto label_307040;
    ctx->pc = 0x307144u;
label_307144:
    // 0x307144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x307144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307148: 0xc0c4894  jal         func_312250
    ctx->pc = 0x307148u;
    SET_GPR_U32(ctx, 31, 0x307150u);
    ctx->pc = 0x30714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307148u;
    // 0x30714c: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312250u, 0x307148u, 0x307150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307150u;
label_307150:
    // 0x307150: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x307150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x307154: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x307154u;
    SET_GPR_U32(ctx, 31, 0x30715Cu);
    ctx->pc = 0x307158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307154u;
    // 0x307158: 0x24847170  addiu       $a0, $a0, 0x7170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x307154u, 0x30715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30715Cu;
label_30715c:
    // 0x30715c: 0xc0c1c5c  jal         func_307170
    ctx->pc = 0x30715Cu;
    SET_GPR_U32(ctx, 31, 0x307164u);
    ctx->pc = 0x307170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307170u, 0x30715Cu, 0x307164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307164u;
label_307164:
    // 0x307164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307168: 0x3e00008  jr          $ra
    ctx->pc = 0x307168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307168u;
        // 0x30716c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307170u;
}
