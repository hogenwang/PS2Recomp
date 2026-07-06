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

// Function: sub_001B1820
// Address: 0x1b1820 - 0x1b18d0
void sub_001B1820_0x1b1820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1820_0x1b1820");
#endif

    switch (ctx->pc) {
        case 0x1b1840u: goto label_1b1840;
        case 0x1b18acu: goto label_1b18ac;
        case 0x1b18b8u: goto label_1b18b8;
        default: break;
    }

    ctx->pc = 0x1b1820u;

    // 0x1b1820: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1b1820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1b1824: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1828: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1b1828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b182c: 0x24a57570  addiu       $a1, $a1, 0x7570
    ctx->pc = 0x1b182cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30064));
    // 0x1b1830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1834: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1838: 0xc049c22  jal         func_127088
    ctx->pc = 0x1B1838u;
    SET_GPR_U32(ctx, 31, 0x1B1840u);
    ctx->pc = 0x1B183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1838u;
    // 0x1b183c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x1B1838u, 0x1B1840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1840u;
label_1b1840:
    // 0x1b1840: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B1840u;
    {
        const bool branch_taken_0x1b1840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1840u;
        // 0x1b1844: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1840) {
            ctx->pc = 0x1B1870u;
            goto label_1b1870;
        }
    }
    ctx->pc = 0x1B1848u;
    // 0x1b1848: 0x92050005  lbu         $a1, 0x5($s0)
    ctx->pc = 0x1b1848u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1b184c: 0x92040007  lbu         $a0, 0x7($s0)
    ctx->pc = 0x1b184cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x1b1850: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x1b1850u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1b1854: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1b1854u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1b1858: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1b1858u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b185c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1b185cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1b1860: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b1860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1b1864: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b1864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b1868: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1b1868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1b186c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b186cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b1870:
    // 0x1b1870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1874: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1878: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1878u;
        // 0x1b187c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1880u;
    // 0x1b1880: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1884: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1884u;
        // 0x1b1888: 0xac440098  sw          $a0, 0x98($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B188Cu;
    // 0x1b188c: 0x0  nop
    ctx->pc = 0x1b188cu;
    // NOP
    // 0x1b1890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b189c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b18a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b18a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b18a4: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B18A4u;
    SET_GPR_U32(ctx, 31, 0x1B18ACu);
    ctx->pc = 0x1B18A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B18A4u;
    // 0x1b18a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1B18A4u, 0x1B18ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18ACu;
label_1b18ac:
    // 0x1b18ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b18acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b18b0: 0xc06c634  jal         func_1B18D0
    ctx->pc = 0x1B18B0u;
    SET_GPR_U32(ctx, 31, 0x1B18B8u);
    ctx->pc = 0x1B18B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B18B0u;
    // 0x1b18b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B18D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B18D0u, 0x1B18B0u, 0x1B18B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18B8u;
label_1b18b8:
    // 0x1b18b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b18b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b18bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b18bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b18c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b18c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b18c4: 0x806c6b2  j           func_1B1AC8
    ctx->pc = 0x1B18C4u;
    ctx->pc = 0x1B18C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B18C4u;
    // 0x1b18c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime); return;
    ctx->pc = 0x1B18CCu;
    // 0x1b18cc: 0x0  nop
    ctx->pc = 0x1b18ccu;
    // NOP
}
