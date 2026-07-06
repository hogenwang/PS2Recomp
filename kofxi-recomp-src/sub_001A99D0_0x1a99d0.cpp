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

// Function: sub_001A99D0
// Address: 0x1a99d0 - 0x1a9a38
void sub_001A99D0_0x1a99d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A99D0_0x1a99d0");
#endif

    switch (ctx->pc) {
        case 0x1a99d0u: goto label_1a99d0;
        case 0x1a99d4u: goto label_1a99d4;
        case 0x1a99d8u: goto label_1a99d8;
        case 0x1a99dcu: goto label_1a99dc;
        case 0x1a99e0u: goto label_1a99e0;
        case 0x1a99e4u: goto label_1a99e4;
        case 0x1a99e8u: goto label_1a99e8;
        case 0x1a99ecu: goto label_1a99ec;
        case 0x1a99f0u: goto label_1a99f0;
        case 0x1a99f4u: goto label_1a99f4;
        case 0x1a99f8u: goto label_1a99f8;
        case 0x1a99fcu: goto label_1a99fc;
        case 0x1a9a00u: goto label_1a9a00;
        case 0x1a9a04u: goto label_1a9a04;
        case 0x1a9a08u: goto label_1a9a08;
        case 0x1a9a0cu: goto label_1a9a0c;
        case 0x1a9a10u: goto label_1a9a10;
        case 0x1a9a14u: goto label_1a9a14;
        case 0x1a9a18u: goto label_1a9a18;
        case 0x1a9a1cu: goto label_1a9a1c;
        case 0x1a9a20u: goto label_1a9a20;
        case 0x1a9a24u: goto label_1a9a24;
        case 0x1a9a28u: goto label_1a9a28;
        case 0x1a9a2cu: goto label_1a9a2c;
        case 0x1a9a30u: goto label_1a9a30;
        case 0x1a9a34u: goto label_1a9a34;
        default: break;
    }

    ctx->pc = 0x1a99d0u;

label_1a99d0:
    // 0x1a99d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a99d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a99d4:
    // 0x1a99d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a99d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a99d8:
    // 0x1a99d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a99d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a99dc:
    // 0x1a99dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a99dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a99e0:
    // 0x1a99e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a99e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a99e4:
    // 0x1a99e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a99e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a99e8:
    // 0x1a99e8: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x1a99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1a99ec:
    // 0x1a99ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a99f0:
    if (ctx->pc == 0x1A99F0u) {
        ctx->pc = 0x1A99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99ECu;
        // 0x1a99f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99F4u;
        goto label_1a99f4;
    }
    ctx->pc = 0x1A99ECu;
    {
        const bool branch_taken_0x1a99ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99ECu;
        // 0x1a99f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99ec) {
            ctx->pc = 0x1A9A04u;
            goto label_1a9a04;
        }
    }
    ctx->pc = 0x1A99F4u;
label_1a99f4:
    // 0x1a99f4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a99f8:
    // 0x1a99f8: 0x8c43e474  lw          $v1, -0x1B8C($v0)
    ctx->pc = 0x1a99f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960244)));
label_1a99fc:
    // 0x1a99fc: 0x60f809  jalr        $v1
label_1a9a00:
    if (ctx->pc == 0x1A9A00u) {
        ctx->pc = 0x1A9A04u;
        goto label_1a9a04;
    }
    ctx->pc = 0x1A99FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9A04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A99FCu, 0x1A9A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9A04u;
label_1a9a04:
    // 0x1a9a04: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1a9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1a9a08:
    // 0x1a9a08: 0xae3000b8  sw          $s0, 0xB8($s1)
    ctx->pc = 0x1a9a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 16));
label_1a9a0c:
    // 0x1a9a0c: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x1a9a0cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a9a10:
    // 0x1a9a10: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1a9a14:
    if (ctx->pc == 0x1A9A14u) {
        ctx->pc = 0x1A9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A10u;
        // 0x1a9a14: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A18u;
        goto label_1a9a18;
    }
    ctx->pc = 0x1A9A10u;
    {
        const bool branch_taken_0x1a9a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9a10) {
            ctx->pc = 0x1A9A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9A10u;
            // 0x1a9a14: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9A18u;
            goto label_1a9a18;
        }
    }
    ctx->pc = 0x1A9A18u;
label_1a9a18:
    // 0x1a9a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9a1c:
    // 0x1a9a1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a9a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9a20:
    // 0x1a9a20: 0x1812  mflo        $v1
    ctx->pc = 0x1a9a20u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1a9a24:
    // 0x1a9a24: 0xae2300bc  sw          $v1, 0xBC($s1)
    ctx->pc = 0x1a9a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
label_1a9a28:
    // 0x1a9a28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a9a2c:
    // 0x1a9a2c: 0x3e00008  jr          $ra
label_1a9a30:
    if (ctx->pc == 0x1A9A30u) {
        ctx->pc = 0x1A9A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A2Cu;
        // 0x1a9a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A34u;
        goto label_1a9a34;
    }
    ctx->pc = 0x1A9A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A2Cu;
        // 0x1a9a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9A34u;
label_1a9a34:
    // 0x1a9a34: 0x0  nop
    ctx->pc = 0x1a9a34u;
    // NOP
    if (ctx->pc == 0x1a9a34u) { ctx->pc = 0x1a9a38u; }
}
