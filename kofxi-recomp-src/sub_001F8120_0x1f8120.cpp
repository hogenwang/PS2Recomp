#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8120
// Address: 0x1f8120 - 0x1f81a0
void sub_001F8120_0x1f8120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8120_0x1f8120");
#endif

    switch (ctx->pc) {
        case 0x1f8120u: goto label_1f8120;
        case 0x1f8124u: goto label_1f8124;
        case 0x1f8128u: goto label_1f8128;
        case 0x1f812cu: goto label_1f812c;
        case 0x1f8130u: goto label_1f8130;
        case 0x1f8134u: goto label_1f8134;
        case 0x1f8138u: goto label_1f8138;
        case 0x1f813cu: goto label_1f813c;
        case 0x1f8140u: goto label_1f8140;
        case 0x1f8144u: goto label_1f8144;
        case 0x1f8148u: goto label_1f8148;
        case 0x1f814cu: goto label_1f814c;
        case 0x1f8150u: goto label_1f8150;
        case 0x1f8154u: goto label_1f8154;
        case 0x1f8158u: goto label_1f8158;
        case 0x1f815cu: goto label_1f815c;
        case 0x1f8160u: goto label_1f8160;
        case 0x1f8164u: goto label_1f8164;
        case 0x1f8168u: goto label_1f8168;
        case 0x1f816cu: goto label_1f816c;
        case 0x1f8170u: goto label_1f8170;
        case 0x1f8174u: goto label_1f8174;
        case 0x1f8178u: goto label_1f8178;
        case 0x1f817cu: goto label_1f817c;
        case 0x1f8180u: goto label_1f8180;
        case 0x1f8184u: goto label_1f8184;
        case 0x1f8188u: goto label_1f8188;
        case 0x1f818cu: goto label_1f818c;
        case 0x1f8190u: goto label_1f8190;
        case 0x1f8194u: goto label_1f8194;
        case 0x1f8198u: goto label_1f8198;
        case 0x1f819cu: goto label_1f819c;
        default: break;
    }

    ctx->pc = 0x1f8120u;

label_1f8120:
    // 0x1f8120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f8124:
    // 0x1f8124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f8128:
    // 0x1f8128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f8128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f812c:
    // 0x1f812c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f812cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1f8130:
    // 0x1f8130: 0x8e032064  lw          $v1, 0x2064($s0)
    ctx->pc = 0x1f8130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8292)));
label_1f8134:
    // 0x1f8134: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f8134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f8138:
    // 0x1f8138: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f8138u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f813c:
    // 0x1f813c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f813cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f8140:
    // 0x1f8140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f8144:
    // 0x1f8144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f8144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f8148:
    // 0x1f8148: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1f8148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1f814c:
    // 0x1f814c: 0x26101378  addiu       $s0, $s0, 0x1378
    ctx->pc = 0x1f814cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4984));
label_1f8150:
    // 0x1f8150: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1f8150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f8154:
    // 0x1f8154: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f8154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f8158:
    // 0x1f8158: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1f8158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1f815c:
    // 0x1f815c: 0x40f809  jalr        $v0
label_1f8160:
    if (ctx->pc == 0x1F8160u) {
        ctx->pc = 0x1F8160u;
            // 0x1f8160: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F8164u;
        goto label_1f8164;
    }
    ctx->pc = 0x1F815Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F8164u);
        ctx->pc = 0x1F8160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F815Cu;
            // 0x1f8160: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F8164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F8164u; }
            if (ctx->pc != 0x1F8164u) { return; }
        }
        }
    }
    ctx->pc = 0x1F8164u;
label_1f8164:
    // 0x1f8164: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1f8164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f8168:
    // 0x1f8168: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1f8168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1f816c:
    // 0x1f816c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1f816cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f8170:
    // 0x1f8170: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_1f8174:
    if (ctx->pc == 0x1F8174u) {
        ctx->pc = 0x1F8174u;
            // 0x1f8174: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1F8178u;
        goto label_1f8178;
    }
    ctx->pc = 0x1F8170u;
    {
        const bool branch_taken_0x1f8170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8170) {
            ctx->pc = 0x1F8174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8170u;
            // 0x1f8174: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8178u;
            goto label_1f8178;
        }
    }
    ctx->pc = 0x1F8178u;
label_1f8178:
    // 0x1f8178: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f817c:
    // 0x1f817c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f817cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8180:
    // 0x1f8180: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f8180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f8184:
    // 0x1f8184: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f8184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f8188:
    // 0x1f8188: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1f8188u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f818c:
    // 0x1f818c: 0x1812  mflo        $v1
    ctx->pc = 0x1f818cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1f8190:
    // 0x1f8190: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f8190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f8194:
    // 0x1f8194: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f8194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f8198:
    // 0x1f8198: 0x3e00008  jr          $ra
label_1f819c:
    if (ctx->pc == 0x1F819Cu) {
        ctx->pc = 0x1F819Cu;
            // 0x1f819c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F81A0u;
        goto label_fallthrough_0x1f8198;
    }
    ctx->pc = 0x1F8198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F819Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8198u;
            // 0x1f819c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1f8198:
    ctx->pc = 0x1F81A0u;
    ctx->pc = 0x1f81a0u;
}
