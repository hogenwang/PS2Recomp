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

// Function: sub_00275508
// Address: 0x275508 - 0x2755f0
void sub_00275508_0x275508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275508_0x275508");
#endif

    switch (ctx->pc) {
        case 0x275544u: goto label_275544;
        case 0x275558u: goto label_275558;
        case 0x275588u: goto label_275588;
        case 0x2755dcu: goto label_2755dc;
        default: break;
    }

    ctx->pc = 0x275508u;

    // 0x275508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27550c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27550cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x275510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275514: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x275514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x275518: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x275518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x27551c: 0x24635564  addiu       $v1, $v1, 0x5564
    ctx->pc = 0x27551cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21860));
    // 0x275520: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x275520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275524: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275524u;
    {
        const bool branch_taken_0x275524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275524) {
            ctx->pc = 0x275544u;
            goto label_275544;
        }
    }
    ctx->pc = 0x27552Cu;
    // 0x27552c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x27552cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275530: 0x24845578  addiu       $a0, $a0, 0x5578
    ctx->pc = 0x275530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21880));
    // 0x275534: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x275534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x275538: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x275538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27553c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27553Cu;
    SET_GPR_U32(ctx, 31, 0x275544u);
    ctx->pc = 0x275540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27553Cu;
    // 0x275540: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27553Cu, 0x275544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275544u;
label_275544:
    // 0x275544: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275544u;
    {
        const bool branch_taken_0x275544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275544) {
            ctx->pc = 0x275578u;
            goto label_275578;
        }
    }
    ctx->pc = 0x27554Cu;
    // 0x27554c: 0xa3d5f569  sb          $s5, -0xA97($fp)
    ctx->pc = 0x27554cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4294964585), (uint8_t)GPR_U32(ctx, 21));
    // 0x275550: 0xc2865a8  jal         func_A196A0
    ctx->pc = 0x275550u;
    SET_GPR_U32(ctx, 31, 0x275558u);
    ctx->pc = 0x275554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275550u;
    // 0x275554: 0xddc31c97  ld          $v1, 0x1C97($t6) (Delay Slot)
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 14), 7319)));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA196A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA196A0u, 0x275550u, 0x275558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275558u;
label_275558:
    // 0x275558: 0xa0b84a69  sb          $t8, 0x4A69($a1)
    ctx->pc = 0x275558u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 19049), (uint8_t)GPR_U32(ctx, 24));
    // 0x27555c: 0xff241d12  sd          $a0, 0x1D12($t9)
    ctx->pc = 0x27555cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 7442), GPR_U64(ctx, 4));
    // 0x275560: 0x2239820  add         $s3, $s1, $v1
    ctx->pc = 0x275560u;
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
    // 0x275564: 0x0  nop
    ctx->pc = 0x275564u;
    // NOP
    // 0x275568: 0x2f7365be  sltiu       $s3, $k1, 0x65BE
    ctx->pc = 0x275568u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)26046) ? 1 : 0);
    // 0x27556c: 0x971e299e  lhu         $fp, 0x299E($t8)
    ctx->pc = 0x27556cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10654)));
    // 0x275570: 0x2f7365aa  sltiu       $s3, $k1, 0x65AA
    ctx->pc = 0x275570u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)26026) ? 1 : 0);
    // 0x275574: 0x0  nop
    ctx->pc = 0x275574u;
    // NOP
label_275578:
    // 0x275578: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x275578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27557c: 0x8c43340c  lw          $v1, 0x340C($v0)
    ctx->pc = 0x27557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13324)));
    // 0x275580: 0xc09e562  jal         func_279588
    ctx->pc = 0x275580u;
    SET_GPR_U32(ctx, 31, 0x275588u);
    ctx->pc = 0x275584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275580u;
    // 0x275584: 0x51a7a9a4  beql        $t5, $a3, . + 4 + (-0x565C << 2) (Delay Slot)
    // Likely branch instruction at 0x275584 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x279588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279588u, 0x275580u, 0x275588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275588u;
label_275588:
    // 0x275588: 0x51c1a986  beql        $t6, $at, . + 4 + (-0x567A << 2)
    ctx->pc = 0x275588u;
    {
        const bool branch_taken_0x275588 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 1));
        if (branch_taken_0x275588) {
            ctx->pc = 0x27558Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275588u;
            // 0x27558c: 0x1000000b  b           . + 4 + (0xB << 2) (Delay Slot)
            // Likely branch instruction at 0x27558C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FBA4u;
            return;
        }
    }
    ctx->pc = 0x275590u;
    // 0x275590: 0x0  nop
    ctx->pc = 0x275590u;
    // NOP
    // 0x275594: 0xa26fa4d1  sb          $t7, -0x5B2F($s3)
    ctx->pc = 0x275594u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294943953), (uint8_t)GPR_U32(ctx, 15));
    // 0x275598: 0xdec21bd7  ld          $v0, 0x1BD7($s6)
    ctx->pc = 0x275598u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 7127)));
    // 0x27559c: 0x8e2e4045  lw          $t6, 0x4045($s1)
    ctx->pc = 0x27559cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16453)));
    // 0x2755a0: 0xddfafadf  ld          $k0, -0x521($t7)
    ctx->pc = 0x2755a0u;
    SET_GPR_U64(ctx, 26, READ64(ADD32(GPR_U32(ctx, 15), 4294965983)));
    // 0x2755a4: 0x8ed37715  lw          $s3, 0x7715($s6)
    ctx->pc = 0x2755a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 30485)));
    // 0x2755a8: 0x8fa27e65  lw          $v0, 0x7E65($sp)
    ctx->pc = 0x2755a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32357)));
    // 0x2755ac: 0x2f7365eb  sltiu       $s3, $k1, 0x65EB
    ctx->pc = 0x2755acu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)26091) ? 1 : 0);
    // 0x2755b0: 0x971e299f  lhu         $fp, 0x299F($t8)
    ctx->pc = 0x2755b0u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10655)));
    // 0x2755b4: 0x2f7365ff  sltiu       $s3, $k1, 0x65FF
    ctx->pc = 0x2755b4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)26111) ? 1 : 0);
    // 0x2755b8: 0x0  nop
    ctx->pc = 0x2755b8u;
    // NOP
label_2755bc:
    // 0x2755bc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2755bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2755c0: 0x244255ac  addiu       $v0, $v0, 0x55AC
    ctx->pc = 0x2755c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21932));
    // 0x2755c4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2755c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2755c8: 0x2484558c  addiu       $a0, $a0, 0x558C
    ctx->pc = 0x2755c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21900));
    // 0x2755cc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2755ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2755d0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2755d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2755d4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2755D4u;
    SET_GPR_U32(ctx, 31, 0x2755DCu);
    ctx->pc = 0x2755D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2755D4u;
    // 0x2755d8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x2755D4u, 0x2755DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755DCu;
label_2755dc:
    // 0x2755dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2755dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2755e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2755e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2755e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2755e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2755e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2755E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2755ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755E8u;
        // 0x2755ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2755E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2755F0u;
}
