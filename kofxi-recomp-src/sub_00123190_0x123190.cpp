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

// Function: sub_00123190
// Address: 0x123190 - 0x123258
void sub_00123190_0x123190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123190_0x123190");
#endif

    switch (ctx->pc) {
        case 0x123190u: goto label_123190;
        case 0x123194u: goto label_123194;
        case 0x123198u: goto label_123198;
        case 0x12319cu: goto label_12319c;
        case 0x1231a0u: goto label_1231a0;
        case 0x1231a4u: goto label_1231a4;
        case 0x1231a8u: goto label_1231a8;
        case 0x1231acu: goto label_1231ac;
        case 0x1231b0u: goto label_1231b0;
        case 0x1231b4u: goto label_1231b4;
        case 0x1231b8u: goto label_1231b8;
        case 0x1231bcu: goto label_1231bc;
        case 0x1231c0u: goto label_1231c0;
        case 0x1231c4u: goto label_1231c4;
        case 0x1231c8u: goto label_1231c8;
        case 0x1231ccu: goto label_1231cc;
        case 0x1231d0u: goto label_1231d0;
        case 0x1231d4u: goto label_1231d4;
        case 0x1231d8u: goto label_1231d8;
        case 0x1231dcu: goto label_1231dc;
        case 0x1231e0u: goto label_1231e0;
        case 0x1231e4u: goto label_1231e4;
        case 0x1231e8u: goto label_1231e8;
        case 0x1231ecu: goto label_1231ec;
        case 0x1231f0u: goto label_1231f0;
        case 0x1231f4u: goto label_1231f4;
        case 0x1231f8u: goto label_1231f8;
        case 0x1231fcu: goto label_1231fc;
        case 0x123200u: goto label_123200;
        case 0x123204u: goto label_123204;
        case 0x123208u: goto label_123208;
        case 0x12320cu: goto label_12320c;
        case 0x123210u: goto label_123210;
        case 0x123214u: goto label_123214;
        case 0x123218u: goto label_123218;
        case 0x12321cu: goto label_12321c;
        case 0x123220u: goto label_123220;
        case 0x123224u: goto label_123224;
        case 0x123228u: goto label_123228;
        case 0x12322cu: goto label_12322c;
        case 0x123230u: goto label_123230;
        case 0x123234u: goto label_123234;
        case 0x123238u: goto label_123238;
        case 0x12323cu: goto label_12323c;
        case 0x123240u: goto label_123240;
        case 0x123244u: goto label_123244;
        case 0x123248u: goto label_123248;
        case 0x12324cu: goto label_12324c;
        case 0x123250u: goto label_123250;
        case 0x123254u: goto label_123254;
        default: break;
    }

    ctx->pc = 0x123190u;

label_123190:
    // 0x123190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x123190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_123194:
    // 0x123194: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_123198:
    // 0x123198: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x123198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_12319c:
    // 0x12319c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1231a0:
    // 0x1231a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1231a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1231a4:
    // 0x1231a4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1231a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1231a8:
    // 0x1231a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1231a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1231ac:
    // 0x1231ac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1231acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1231b0:
    // 0x1231b0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1231b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1231b4:
    // 0x1231b4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1231b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1231b8:
    // 0x1231b8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1231b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1231bc:
    // 0x1231bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1231bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1231c0:
    // 0x1231c0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1231c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1231c4:
    // 0x1231c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1231c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1231c8:
    // 0x1231c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1231c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1231cc:
    // 0x1231cc: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_1231d0:
    if (ctx->pc == 0x1231D0u) {
        ctx->pc = 0x1231D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231CCu;
        // 0x1231d0: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1231D4u;
        goto label_1231d4;
    }
    ctx->pc = 0x1231CCu;
    {
        const bool branch_taken_0x1231cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231CCu;
        // 0x1231d0: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231cc) {
            ctx->pc = 0x123218u;
            goto label_123218;
        }
    }
    ctx->pc = 0x1231D4u;
label_1231d4:
    // 0x1231d4: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
label_1231d8:
    if (ctx->pc == 0x1231D8u) {
        ctx->pc = 0x1231D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231D4u;
        // 0x1231d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1231DCu;
        goto label_1231dc;
    }
    ctx->pc = 0x1231D4u;
    {
        const bool branch_taken_0x1231d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231D4u;
        // 0x1231d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231d4) {
            ctx->pc = 0x12321Cu;
            goto label_12321c;
        }
    }
    ctx->pc = 0x1231DCu;
label_1231dc:
    // 0x1231dc: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_1231e0:
    if (ctx->pc == 0x1231E0u) {
        ctx->pc = 0x1231E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231DCu;
        // 0x1231e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1231E4u;
        goto label_1231e4;
    }
    ctx->pc = 0x1231DCu;
    {
        const bool branch_taken_0x1231dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231DCu;
        // 0x1231e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231dc) {
            ctx->pc = 0x123220u;
            goto label_123220;
        }
    }
    ctx->pc = 0x1231E4u;
label_1231e4:
    // 0x1231e4: 0x2717821  addu        $t7, $s3, $s1
    ctx->pc = 0x1231e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1231e8:
    // 0x1231e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1231e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1231ec:
    // 0x1231ec: 0xf8042  srl         $s0, $t7, 1
    ctx->pc = 0x1231ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
label_1231f0:
    // 0x1231f0: 0x2147018  mult        $t6, $s0, $s4
    ctx->pc = 0x1231f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_1231f4:
    // 0x1231f4: 0x2ce9021  addu        $s2, $s6, $t6
    ctx->pc = 0x1231f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
label_1231f8:
    // 0x1231f8: 0x2a0f809  jalr        $s5
label_1231fc:
    if (ctx->pc == 0x1231FCu) {
        ctx->pc = 0x1231FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231F8u;
        // 0x1231fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123200u;
        goto label_123200;
    }
    ctx->pc = 0x1231F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x123200u);
        ctx->pc = 0x1231FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231F8u;
        // 0x1231fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1231F8u, 0x123200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123200u;
label_123200:
    // 0x123200: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_123204:
    if (ctx->pc == 0x123204u) {
        ctx->pc = 0x123208u;
        goto label_123208;
    }
    ctx->pc = 0x123200u;
    {
        const bool branch_taken_0x123200 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x123200) {
            ctx->pc = 0x123248u;
            goto label_123248;
        }
    }
    ctx->pc = 0x123208u;
label_123208:
    // 0x123208: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x123208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12320c:
    // 0x12320c: 0x271782b  sltu        $t7, $s3, $s1
    ctx->pc = 0x12320cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_123210:
    // 0x123210: 0x15e0fff5  bnez        $t7, . + 4 + (-0xB << 2)
label_123214:
    if (ctx->pc == 0x123214u) {
        ctx->pc = 0x123214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123210u;
        // 0x123214: 0x2717821  addu        $t7, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123218u;
        goto label_123218;
    }
    ctx->pc = 0x123210u;
    {
        const bool branch_taken_0x123210 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123210u;
        // 0x123214: 0x2717821  addu        $t7, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123210) {
            ctx->pc = 0x1231E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1231e8;
        }
    }
    ctx->pc = 0x123218u;
label_123218:
    // 0x123218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x123218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12321c:
    // 0x12321c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12321cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123220:
    // 0x123220: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_123224:
    // 0x123224: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_123228:
    // 0x123228: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x123228u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12322c:
    // 0x12322c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12322cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_123230:
    // 0x123230: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x123230u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_123234:
    // 0x123234: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x123234u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_123238:
    // 0x123238: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x123238u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12323c:
    // 0x12323c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12323cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_123240:
    // 0x123240: 0x3e00008  jr          $ra
label_123244:
    if (ctx->pc == 0x123244u) {
        ctx->pc = 0x123244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123240u;
        // 0x123244: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123248u;
        goto label_123248;
    }
    ctx->pc = 0x123240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123240u;
        // 0x123244: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123248u;
label_123248:
    // 0x123248: 0x1c40fff0  bgtz        $v0, . + 4 + (-0x10 << 2)
label_12324c:
    if (ctx->pc == 0x12324Cu) {
        ctx->pc = 0x12324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123248u;
        // 0x12324c: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123250u;
        goto label_123250;
    }
    ctx->pc = 0x123248u;
    {
        const bool branch_taken_0x123248 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123248u;
        // 0x12324c: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123248) {
            ctx->pc = 0x12320Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12320c;
        }
    }
    ctx->pc = 0x123250u;
label_123250:
    // 0x123250: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_123254:
    if (ctx->pc == 0x123254u) {
        ctx->pc = 0x123254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123250u;
        // 0x123254: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123258u;
        goto label_fallthrough_0x123250;
    }
    ctx->pc = 0x123250u;
    {
        const bool branch_taken_0x123250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123250u;
        // 0x123254: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123250) {
            ctx->pc = 0x12321Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12321c;
        }
    }
label_fallthrough_0x123250:
    ctx->pc = 0x123258u;
}
