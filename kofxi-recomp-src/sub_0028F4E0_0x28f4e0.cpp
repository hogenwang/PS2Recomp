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

// Function: sub_0028F4E0
// Address: 0x28f4e0 - 0x28f570
void sub_0028F4E0_0x28f4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F4E0_0x28f4e0");
#endif

    switch (ctx->pc) {
        case 0x28f4e0u: goto label_28f4e0;
        case 0x28f4e4u: goto label_28f4e4;
        case 0x28f4e8u: goto label_28f4e8;
        case 0x28f4ecu: goto label_28f4ec;
        case 0x28f4f0u: goto label_28f4f0;
        case 0x28f4f4u: goto label_28f4f4;
        case 0x28f4f8u: goto label_28f4f8;
        case 0x28f4fcu: goto label_28f4fc;
        case 0x28f500u: goto label_28f500;
        case 0x28f504u: goto label_28f504;
        case 0x28f508u: goto label_28f508;
        case 0x28f50cu: goto label_28f50c;
        case 0x28f510u: goto label_28f510;
        case 0x28f514u: goto label_28f514;
        case 0x28f518u: goto label_28f518;
        case 0x28f51cu: goto label_28f51c;
        case 0x28f520u: goto label_28f520;
        case 0x28f524u: goto label_28f524;
        case 0x28f528u: goto label_28f528;
        case 0x28f52cu: goto label_28f52c;
        case 0x28f530u: goto label_28f530;
        case 0x28f534u: goto label_28f534;
        case 0x28f538u: goto label_28f538;
        case 0x28f53cu: goto label_28f53c;
        case 0x28f540u: goto label_28f540;
        case 0x28f544u: goto label_28f544;
        case 0x28f548u: goto label_28f548;
        case 0x28f54cu: goto label_28f54c;
        case 0x28f550u: goto label_28f550;
        case 0x28f554u: goto label_28f554;
        case 0x28f558u: goto label_28f558;
        case 0x28f55cu: goto label_28f55c;
        case 0x28f560u: goto label_28f560;
        case 0x28f564u: goto label_28f564;
        case 0x28f568u: goto label_28f568;
        case 0x28f56cu: goto label_28f56c;
        default: break;
    }

    ctx->pc = 0x28f4e0u;

label_28f4e0:
    // 0x28f4e0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f4e4:
    // 0x28f4e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f4e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f4e8:
    // 0x28f4e8: 0x8c424698  lw          $v0, 0x4698($v0)
    ctx->pc = 0x28f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18072)));
label_28f4ec:
    // 0x28f4ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f4f0:
    if (ctx->pc == 0x28F4F0u) {
        ctx->pc = 0x28F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4ECu;
        // 0x28f4f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F4F4u;
        goto label_28f4f4;
    }
    ctx->pc = 0x28F4ECu;
    {
        const bool branch_taken_0x28f4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4ECu;
        // 0x28f4f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4ec) {
            ctx->pc = 0x28F514u;
            goto label_28f514;
        }
    }
    ctx->pc = 0x28F4F4u;
label_28f4f4:
    // 0x28f4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f4f8:
    // 0x28f4f8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f4fc:
    // 0x28f4fc: 0x24050088  addiu       $a1, $zero, 0x88
    ctx->pc = 0x28f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_28f500:
    // 0x28f500: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f504:
    // 0x28f504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f508:
    // 0x28f508: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28f508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f50c:
    // 0x28f50c: 0x80a5648  j           func_295920
label_28f510:
    if (ctx->pc == 0x28F510u) {
        ctx->pc = 0x28F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F50Cu;
        // 0x28f510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F514u;
        goto label_28f514;
    }
    ctx->pc = 0x28F50Cu;
    ctx->pc = 0x28F510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F50Cu;
    // 0x28f510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    sub_00295920_0x295920(rdram, ctx, runtime); return;
    ctx->pc = 0x28F514u;
label_28f514:
    // 0x28f514: 0x40f809  jalr        $v0
label_28f518:
    if (ctx->pc == 0x28F518u) {
        ctx->pc = 0x28F51Cu;
        goto label_28f51c;
    }
    ctx->pc = 0x28F514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F51Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F514u, 0x28F51Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F51Cu;
label_28f51c:
    // 0x28f51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f520:
    // 0x28f520: 0x3e00008  jr          $ra
label_28f524:
    if (ctx->pc == 0x28F524u) {
        ctx->pc = 0x28F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F520u;
        // 0x28f524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F528u;
        goto label_28f528;
    }
    ctx->pc = 0x28F520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F520u;
        // 0x28f524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F528u;
label_28f528:
    // 0x28f528: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f52c:
    // 0x28f52c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f52cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f530:
    // 0x28f530: 0x8c42469c  lw          $v0, 0x469C($v0)
    ctx->pc = 0x28f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18076)));
label_28f534:
    // 0x28f534: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f538:
    if (ctx->pc == 0x28F538u) {
        ctx->pc = 0x28F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F534u;
        // 0x28f538: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F53Cu;
        goto label_28f53c;
    }
    ctx->pc = 0x28F534u;
    {
        const bool branch_taken_0x28f534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F534u;
        // 0x28f538: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f534) {
            ctx->pc = 0x28F55Cu;
            goto label_28f55c;
        }
    }
    ctx->pc = 0x28F53Cu;
label_28f53c:
    // 0x28f53c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f540:
    // 0x28f540: 0x24050097  addiu       $a1, $zero, 0x97
    ctx->pc = 0x28f540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_28f544:
    // 0x28f544: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f548:
    // 0x28f548: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f54c:
    // 0x28f54c: 0xc0a5648  jal         func_295920
label_28f550:
    if (ctx->pc == 0x28F550u) {
        ctx->pc = 0x28F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F54Cu;
        // 0x28f550: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F554u;
        goto label_28f554;
    }
    ctx->pc = 0x28F54Cu;
    SET_GPR_U32(ctx, 31, 0x28F554u);
    ctx->pc = 0x28F550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F54Cu;
    // 0x28f550: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28F54Cu, 0x28F554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F554u;
label_28f554:
    // 0x28f554: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f558:
    if (ctx->pc == 0x28F558u) {
        ctx->pc = 0x28F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F554u;
        // 0x28f558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F55Cu;
        goto label_28f55c;
    }
    ctx->pc = 0x28F554u;
    {
        const bool branch_taken_0x28f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F554u;
        // 0x28f558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f554) {
            ctx->pc = 0x28F564u;
            goto label_28f564;
        }
    }
    ctx->pc = 0x28F55Cu;
label_28f55c:
    // 0x28f55c: 0x40f809  jalr        $v0
label_28f560:
    if (ctx->pc == 0x28F560u) {
        ctx->pc = 0x28F564u;
        goto label_28f564;
    }
    ctx->pc = 0x28F55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F564u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F55Cu, 0x28F564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F564u;
label_28f564:
    // 0x28f564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f568:
    // 0x28f568: 0x3e00008  jr          $ra
label_28f56c:
    if (ctx->pc == 0x28F56Cu) {
        ctx->pc = 0x28F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F568u;
        // 0x28f56c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F570u;
        goto label_fallthrough_0x28f568;
    }
    ctx->pc = 0x28F568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F568u;
        // 0x28f56c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28f568:
    ctx->pc = 0x28F570u;
}
