#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC0B8
// Address: 0x1ec0b8 - 0x1ec1a8
void sub_001EC0B8_0x1ec0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC0B8_0x1ec0b8");
#endif

    switch (ctx->pc) {
        case 0x1ec0f0u: goto label_1ec0f0;
        case 0x1ec114u: goto label_1ec114;
        case 0x1ec138u: goto label_1ec138;
        default: break;
    }

    ctx->pc = 0x1ec0b8u;

    // 0x1ec0b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ec0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ec0bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec0c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ec0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec0c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ec0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ec0c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec0cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ec0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ec0d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ec0d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec0d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ec0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ec0d8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ec0d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec0dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ec0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ec0e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ec0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ec0e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EC0E4u;
    {
        const bool branch_taken_0x1ec0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0E4u;
            // 0x1ec0e8: 0x8e920010  lw          $s2, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0e4) {
            ctx->pc = 0x1EC108u;
            goto label_1ec108;
        }
    }
    ctx->pc = 0x1EC0ECu;
    // 0x1ec0ec: 0x0  nop
    ctx->pc = 0x1ec0ecu;
    // NOP
label_1ec0f0:
    // 0x1ec0f0: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x1ec0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1ec0f4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EC0F4u;
    {
        const bool branch_taken_0x1ec0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0F4u;
            // 0x1ec0f8: 0x2328821  addu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0f4) {
            ctx->pc = 0x1EC184u;
            goto label_1ec184;
        }
    }
    ctx->pc = 0x1EC0FCu;
    // 0x1ec0fc: 0x5a000022  blezl       $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1EC0FCu;
    {
        const bool branch_taken_0x1ec0fc = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1ec0fc) {
            ctx->pc = 0x1EC100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0FCu;
            // 0x1ec100: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC188u;
            goto label_1ec188;
        }
    }
    ctx->pc = 0x1EC104u;
    // 0x1ec104: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ec104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ec108:
    // 0x1ec108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec10c: 0xc07b2d6  jal         func_1ECB58
    ctx->pc = 0x1EC10Cu;
    SET_GPR_U32(ctx, 31, 0x1EC114u);
    ctx->pc = 0x1EC110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC10Cu;
            // 0x1ec110: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECB58u;
    if (runtime->hasFunction(0x1ECB58u)) {
        auto targetFn = runtime->lookupFunction(0x1ECB58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC114u; }
        if (ctx->pc != 0x1EC114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECB58_0x1ecb58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC114u; }
        if (ctx->pc != 0x1EC114u) { return; }
    }
    ctx->pc = 0x1EC114u;
label_1ec114:
    // 0x1ec114: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EC114u;
    {
        const bool branch_taken_0x1ec114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC114u;
            // 0x1ec118: 0x2a630003  slti        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec114) {
            ctx->pc = 0x1EC0F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ec0f0;
        }
    }
    ctx->pc = 0x1EC11Cu;
    // 0x1ec11c: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1ec11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1ec120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec124: 0x245144b8  addiu       $s1, $v0, 0x44B8
    ctx->pc = 0x1ec124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 17592));
    // 0x1ec128: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec12c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ec12cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ec130: 0xc07b06a  jal         func_1EC1A8
    ctx->pc = 0x1EC130u;
    SET_GPR_U32(ctx, 31, 0x1EC138u);
    ctx->pc = 0x1EC134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC130u;
            // 0x1ec134: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC1A8u;
    if (runtime->hasFunction(0x1EC1A8u)) {
        auto targetFn = runtime->lookupFunction(0x1EC1A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC138u; }
        if (ctx->pc != 0x1EC138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC1A8_0x1ec1a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC138u; }
        if (ctx->pc != 0x1EC138u) { return; }
    }
    ctx->pc = 0x1EC138u;
label_1ec138:
    // 0x1ec138: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ec138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec13c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EC13Cu;
    {
        const bool branch_taken_0x1ec13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec13c) {
            ctx->pc = 0x1EC140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC13Cu;
            // 0x1ec140: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC188u;
            goto label_1ec188;
        }
    }
    ctx->pc = 0x1EC144u;
    // 0x1ec144: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1ec144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ec148: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EC148u;
    {
        const bool branch_taken_0x1ec148 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ec148) {
            ctx->pc = 0x1EC14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC148u;
            // 0x1ec14c: 0xae82001c  sw          $v0, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC150u;
            goto label_1ec150;
        }
    }
    ctx->pc = 0x1EC150u;
label_1ec150:
    // 0x1ec150: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x1ec150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1ec154: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EC154u;
    {
        const bool branch_taken_0x1ec154 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ec154) {
            ctx->pc = 0x1EC158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC154u;
            // 0x1ec158: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC15Cu;
            goto label_1ec15c;
        }
    }
    ctx->pc = 0x1EC15Cu;
label_1ec15c:
    // 0x1ec15c: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1ec15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1ec160: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EC160u;
    {
        const bool branch_taken_0x1ec160 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ec160) {
            ctx->pc = 0x1EC164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC160u;
            // 0x1ec164: 0xae820018  sw          $v0, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC168u;
            goto label_1ec168;
        }
    }
    ctx->pc = 0x1EC168u;
label_1ec168:
    // 0x1ec168: 0x8e26006c  lw          $a2, 0x6C($s1)
    ctx->pc = 0x1ec168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1ec16c: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC16Cu;
    {
        const bool branch_taken_0x1ec16c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1EC170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC16Cu;
            // 0x1ec170: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec16c) {
            ctx->pc = 0x1EC188u;
            goto label_1ec188;
        }
    }
    ctx->pc = 0x1EC174u;
    // 0x1ec174: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ec174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ec178: 0xae860020  sw          $a2, 0x20($s4)
    ctx->pc = 0x1ec178u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 6));
    // 0x1ec17c: 0x2442e8b0  addiu       $v0, $v0, -0x1750
    ctx->pc = 0x1ec17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961328));
    // 0x1ec180: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1ec180u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_1ec184:
    // 0x1ec184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec188:
    // 0x1ec188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ec188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ec18c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ec18cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec190: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ec190u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec194: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ec194u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec198: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ec198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ec19c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC19Cu;
            // 0x1ec1a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC1A4u;
    // 0x1ec1a4: 0x0  nop
    ctx->pc = 0x1ec1a4u;
    // NOP
    ctx->pc = 0x1ec1a8u;
}
