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

// Function: sub_001D9E98
// Address: 0x1d9e98 - 0x1d9f60
void sub_001D9E98_0x1d9e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9E98_0x1d9e98");
#endif

    switch (ctx->pc) {
        case 0x1d9ec4u: goto label_1d9ec4;
        default: break;
    }

    ctx->pc = 0x1d9e98u;

    // 0x1d9e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9ea8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d9ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9eb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d9eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d9eb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d9ebc: 0xc0770ee  jal         func_1DC3B8
    ctx->pc = 0x1D9EBCu;
    SET_GPR_U32(ctx, 31, 0x1D9EC4u);
    ctx->pc = 0x1D9EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EBCu;
    // 0x1d9ec0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC3B8u, 0x1D9EBCu, 0x1D9EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EC4u;
label_1d9ec4:
    // 0x1d9ec4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d9ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1d9ec8: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x1d9ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x1d9ecc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d9eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ed0: 0x34a5020f  ori         $a1, $a1, 0x20F
    ctx->pc = 0x1d9ed0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)527);
    // 0x1d9ed4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9ED4u;
    {
        const bool branch_taken_0x1d9ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9ED4u;
        // 0x1d9ed8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ed4) {
            ctx->pc = 0x1D9EF8u;
            goto label_1d9ef8;
        }
    }
    ctx->pc = 0x1D9EDCu;
    // 0x1d9edc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9ee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9ee4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9ee8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9ee8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9eec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9ef0: 0x8076688  j           func_1D9A20
    ctx->pc = 0x1D9EF0u;
    ctx->pc = 0x1D9EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EF0u;
    // 0x1d9ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9EF8u;
label_1d9ef8:
    // 0x1d9ef8: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x1d9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x1d9efc: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1d9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1d9f00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d9f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1d9f04: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1d9f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1d9f08: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1d9f08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1d9f0c: 0x8e0402c4  lw          $a0, 0x2C4($s0)
    ctx->pc = 0x1d9f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x1d9f10: 0x54860003  bnel        $a0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9F10u;
    {
        const bool branch_taken_0x1d9f10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x1d9f10) {
            ctx->pc = 0x1D9F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9F10u;
            // 0x1d9f14: 0x8e0202d8  lw          $v0, 0x2D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9F20u;
            goto label_1d9f20;
        }
    }
    ctx->pc = 0x1D9F18u;
    // 0x1d9f18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9F18u;
    {
        const bool branch_taken_0x1d9f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F18u;
        // 0x1d9f1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f18) {
            ctx->pc = 0x1D9F38u;
            goto label_1d9f38;
        }
    }
    ctx->pc = 0x1D9F20u;
label_1d9f20:
    // 0x1d9f20: 0x24030708  addiu       $v1, $zero, 0x708
    ctx->pc = 0x1d9f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x1d9f24: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9F24u;
    {
        const bool branch_taken_0x1d9f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f24) {
            ctx->pc = 0x1D9F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9F24u;
            // 0x1d9f28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9F2Cu;
            goto label_1d9f2c;
        }
    }
    ctx->pc = 0x1D9F2Cu;
label_1d9f2c:
    // 0x1d9f2c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1d9f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d9f30: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1d9f30u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d9f34: 0x1012  mflo        $v0
    ctx->pc = 0x1d9f34u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1d9f38:
    // 0x1d9f38: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d9f38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d9f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9f40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9f44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9f48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9f48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9f4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9f4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9f50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9f54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F54u;
        // 0x1d9f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9F5Cu;
    // 0x1d9f5c: 0x0  nop
    ctx->pc = 0x1d9f5cu;
    // NOP
    if (ctx->pc == 0x1d9f5cu) { ctx->pc = 0x1d9f60u; }
}
