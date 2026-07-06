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

// Function: sub_002DB298
// Address: 0x2db298 - 0x2db380
void sub_002DB298_0x2db298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB298_0x2db298");
#endif

    switch (ctx->pc) {
        case 0x2db2d0u: goto label_2db2d0;
        case 0x2db2e0u: goto label_2db2e0;
        case 0x2db2e4u: goto label_2db2e4;
        case 0x2db2fcu: goto label_2db2fc;
        case 0x2db304u: goto label_2db304;
        case 0x2db32cu: goto label_2db32c;
        case 0x2db330u: goto label_2db330;
        case 0x2db334u: goto label_2db334;
        case 0x2db340u: goto label_2db340;
        case 0x2db344u: goto label_2db344;
        case 0x2db34cu: goto label_2db34c;
        case 0x2db36cu: goto label_2db36c;
        default: break;
    }

    ctx->pc = 0x2db298u;

    // 0x2db298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2db298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2db29c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db2a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2db2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2db2a4: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2db2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2db2a8: 0x2463b2f0  addiu       $v1, $v1, -0x4D10
    ctx->pc = 0x2db2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947568));
    // 0x2db2ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db2b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB2B0u;
    {
        const bool branch_taken_0x2db2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db2b0) {
            ctx->pc = 0x2DB2D0u;
            goto label_2db2d0;
        }
    }
    ctx->pc = 0x2DB2B8u;
    // 0x2db2b8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db2bc: 0x2484b304  addiu       $a0, $a0, -0x4CFC
    ctx->pc = 0x2db2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947588));
    // 0x2db2c0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2db2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db2c4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2db2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2db2c8: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB2C8u;
    SET_GPR_U32(ctx, 31, 0x2DB2D0u);
    ctx->pc = 0x2DB2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB2C8u;
    // 0x2db2cc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DB2C8u, 0x2DB2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB2D0u;
label_2db2d0:
    // 0x2db2d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DB2D0u;
    {
        const bool branch_taken_0x2db2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db2d0) {
            ctx->pc = 0x2DB304u;
            goto label_2db304;
        }
    }
    ctx->pc = 0x2DB2D8u;
    // 0x2db2d8: 0xc3a8daa  jal         func_EA36A8
    ctx->pc = 0x2DB2D8u;
    SET_GPR_U32(ctx, 31, 0x2DB2E0u);
    ctx->pc = 0x2DB2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB2D8u;
    // 0x2db2dc: 0xc126fad  jal         func_49BEB4 (Delay Slot)
    // JAL 0x49BEB4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xEA36A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xEA36A8u, 0x2DB2D8u, 0x2DB2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB2E0u;
label_2db2e0:
    // 0x2db2e0: 0xdeb9c78f  ld          $t9, -0x3871($s5)
    ctx->pc = 0x2db2e0u;
    SET_GPR_U64(ctx, 25, READ64(ADD32(GPR_U32(ctx, 21), 4294952847)));
label_2db2e4:
    // 0x2db2e4: 0x8fc55035  lw          $a1, 0x5035($fp)
    ctx->pc = 0x2db2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20533)));
    // 0x2db2e8: 0x26ac820  add         $t9, $s3, $t2
    ctx->pc = 0x2db2e8u;
    {     int32_t rs_val = GPR_S32(ctx, 19);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
    // 0x2db2ec: 0xa172d9e9  sb          $s2, -0x2617($t3)
    ctx->pc = 0x2db2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4294957545), (uint8_t)GPR_U32(ctx, 18));
    // 0x2db2f0: 0x0  nop
    ctx->pc = 0x2db2f0u;
    // NOP
    // 0x2db2f4: 0xf5ad30b  jal         func_D6B4C2C
    ctx->pc = 0x2DB2F4u;
    SET_GPR_U32(ctx, 31, 0x2DB2FCu);
    ctx->pc = 0x2DB2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB2F4u;
    // 0x2db2f8: 0xc712e21a  lwc1        $f18, -0x1DE6($t8) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294959642)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0xD6B4C2Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD6B4C2Cu, 0x2DB2F4u, 0x2DB2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB2FCu;
label_2db2fc:
    // 0x2db2fc: 0xf5ad313  jal         func_D6B4C4C
    ctx->pc = 0x2DB2FCu;
    SET_GPR_U32(ctx, 31, 0x2DB304u);
    ctx->pc = 0xD6B4C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD6B4C4Cu, 0x2DB2FCu, 0x2DB304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB304u;
label_2db304:
    // 0x2db304: 0x5605fe61  bnel        $s0, $a1, . + 4 + (-0x19F << 2)
    ctx->pc = 0x2DB304u;
    {
        const bool branch_taken_0x2db304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x2db304) {
            ctx->pc = 0x2DB308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB304u;
            // 0x2db308: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAC8Cu;
            return;
        }
    }
    ctx->pc = 0x2DB30Cu;
    // 0x2db30c: 0x5f85e61  mtsab       $t7, 0x5E61
    ctx->pc = 0x2db30cu;
    ctx->sa = ((GPR_U32(ctx, 15) ^ (uint32_t)24161) & 0xF) << 3;
    // 0x2db310: 0x8c6298b0  lw          $v0, -0x6750($v1)
    ctx->pc = 0x2db310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940848)));
    // 0x2db314: 0x1dfa1a10  .word       0x1DFA1A10                   # bgtz        $t7, . + 4 + (0x1A10 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DB314u;
    {
        const bool branch_taken_0x2db314 = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x2DB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB314u;
        // 0x2db318: 0x1ffa36f3  .word       0x1FFA36F3                   # bgtz        $ra, . + 4 + (0x36F3 << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2DB318 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db314) {
            ctx->pc = 0x2E1B58u;
            return;
        }
    }
    ctx->pc = 0x2DB31Cu;
    // 0x2db31c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB31Cu;
    {
        const bool branch_taken_0x2db31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db31c) {
            ctx->pc = 0x2DB34Cu;
            goto label_2db34c;
        }
    }
    ctx->pc = 0x2DB324u;
    // 0x2db324: 0xc630303  jal         func_18C0C0C
    ctx->pc = 0x2DB324u;
    SET_GPR_U32(ctx, 31, 0x2DB32Cu);
    ctx->pc = 0x2DB328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB324u;
    // 0x2db328: 0xc8421ca  jal         func_2108728 (Delay Slot)
    // JAL 0x2108728 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C0C0Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C0C0Cu, 0x2DB324u, 0x2DB32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB32Cu;
label_2db32c:
    // 0x2db32c: 0xc81bfae  jal         func_206FEB8
label_2db330:
    if (ctx->pc == 0x2DB330u) {
        ctx->pc = 0x2DB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB32Cu;
        // 0x2db330: 0x26f56040  addiu       $s5, $s7, 0x6040 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 24640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB334u;
        goto label_2db334;
    }
    ctx->pc = 0x2DB32Cu;
    SET_GPR_U32(ctx, 31, 0x2DB334u);
    ctx->pc = 0x2DB330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB32Cu;
    // 0x2db330: 0x26f56040  addiu       $s5, $s7, 0x6040 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 24640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206FEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206FEB8u, 0x2DB32Cu, 0x2DB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB334u;
label_2db334:
    // 0x2db334: 0xfd48cfa2  sd          $t0, -0x305E($t2)
    ctx->pc = 0x2db334u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294954914), GPR_U64(ctx, 8));
    // 0x2db338: 0xcd720ce  jal         func_35C8338
    ctx->pc = 0x2DB338u;
    SET_GPR_U32(ctx, 31, 0x2DB340u);
    ctx->pc = 0x2DB33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB338u;
    // 0x2db33c: 0xf5b03da  jal         func_D6C0F68 (Delay Slot)
    // JAL 0xD6C0F68 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C8338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C8338u, 0x2DB338u, 0x2DB340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB340u;
label_2db340:
    // 0x2db340: 0xc712e21b  lwc1        $f18, -0x1DE5($t8)
    ctx->pc = 0x2db340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294959643)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2db344:
    // 0x2db344: 0xf5b03c2  jal         func_D6C0F08
    ctx->pc = 0x2DB344u;
    SET_GPR_U32(ctx, 31, 0x2DB34Cu);
    ctx->pc = 0xD6C0F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD6C0F08u, 0x2DB344u, 0x2DB34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB34Cu;
label_2db34c:
    // 0x2db34c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2db34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2db350: 0x2442b33c  addiu       $v0, $v0, -0x4CC4
    ctx->pc = 0x2db350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947644));
    // 0x2db354: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db358: 0x2484b31c  addiu       $a0, $a0, -0x4CE4
    ctx->pc = 0x2db358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947612));
    // 0x2db35c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2db35cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db360: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2db360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db364: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB364u;
    SET_GPR_U32(ctx, 31, 0x2DB36Cu);
    ctx->pc = 0x2DB368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB364u;
    // 0x2db368: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DB364u, 0x2DB36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB36Cu;
label_2db36c:
    // 0x2db36c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2db36cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db370: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2db370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db378: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB378u;
        // 0x2db37c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB380u;
}
