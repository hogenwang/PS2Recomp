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

// Function: sub_00100860
// Address: 0x100860 - 0x100920
void sub_00100860_0x100860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100860_0x100860");
#endif

    switch (ctx->pc) {
        case 0x100874u: goto label_100874;
        default: break;
    }

    ctx->pc = 0x100860u;

    // 0x100860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10086c: 0xc0400f0  jal         func_1003C0
    ctx->pc = 0x10086Cu;
    SET_GPR_U32(ctx, 31, 0x100874u);
    ctx->pc = 0x100870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10086Cu;
    // 0x100870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003C0u, 0x10086Cu, 0x100874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100874u;
label_100874:
    // 0x100874: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x100874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x100878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10087c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10087Cu;
    {
        const bool branch_taken_0x10087c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x100880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10087Cu;
        // 0x100880: 0xde040000  ld          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10087c) {
            ctx->pc = 0x1008C4u;
            goto label_1008c4;
        }
    }
    ctx->pc = 0x100884u;
    // 0x100884: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x100884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x100888: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x100888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x10088c: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x10088cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x100890: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x100890u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x100894: 0x34630070  ori         $v1, $v1, 0x70
    ctx->pc = 0x100894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x100898: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x100898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x10089c: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x10089cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x1008a0: 0xde050010  ld          $a1, 0x10($s0)
    ctx->pc = 0x1008a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1008a4: 0x348400c0  ori         $a0, $a0, 0xC0
    ctx->pc = 0x1008a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)192);
    // 0x1008a8: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1008a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1008ac: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x1008acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1008b0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1008b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1008b4: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x1008b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1008b8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1008b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1008bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1008BCu;
    {
        const bool branch_taken_0x1008bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1008C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008BCu;
        // 0x1008c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008bc) {
            ctx->pc = 0x100910u;
            goto label_100910;
        }
    }
    ctx->pc = 0x1008C4u;
label_1008c4:
    // 0x1008c4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1008c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1008c8: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1008c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1008cc: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x1008ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x1008d0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1008d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1008d4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1008d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1008d8: 0x34c60090  ori         $a2, $a2, 0x90
    ctx->pc = 0x1008d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)144);
    // 0x1008dc: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x1008dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x1008e0: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x1008e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1008e4: 0x34a500a0  ori         $a1, $a1, 0xA0
    ctx->pc = 0x1008e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)160);
    // 0x1008e8: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x1008e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x1008ec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1008ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1008f0: 0x348400e0  ori         $a0, $a0, 0xE0
    ctx->pc = 0x1008f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)224);
    // 0x1008f4: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x1008f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1008f8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1008f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1008fc: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1008fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x100900: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x100900u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x100904: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x100904u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x100908: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x100908u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x10090c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10090cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100910:
    // 0x100910: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100914: 0x3e00008  jr          $ra
    ctx->pc = 0x100914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100914u;
        // 0x100918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10091Cu;
    // 0x10091c: 0x0  nop
    ctx->pc = 0x10091cu;
    // NOP
}
