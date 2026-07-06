#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F8528
// Address: 0x2f8528 - 0x2f85d0
void sub_002F8528_0x2f8528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8528_0x2f8528");
#endif

    switch (ctx->pc) {
        case 0x2f85c4u: goto label_2f85c4;
        default: break;
    }

    ctx->pc = 0x2f8528u;

    // 0x2f8528: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2f8528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2f852c: 0x80890000  lb          $t1, 0x0($a0)
    ctx->pc = 0x2f852cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f8530: 0x2445b7c8  addiu       $a1, $v0, -0x4838
    ctx->pc = 0x2f8530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948808));
    // 0x2f8534: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x2f8534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2f8538: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f8538u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f853c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f853cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f8540: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F8540u;
    {
        const bool branch_taken_0x2f8540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8540) {
            ctx->pc = 0x2F85C4u;
            goto label_2f85c4;
        }
    }
    ctx->pc = 0x2F8548u;
    // 0x2f8548: 0x80870001  lb          $a3, 0x1($a0)
    ctx->pc = 0x2f8548u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2f854c: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x2f854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2f8550: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f8550u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f8554: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f8554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f8558: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F8558u;
    {
        const bool branch_taken_0x2f8558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8558) {
            ctx->pc = 0x2F85C4u;
            goto label_2f85c4;
        }
    }
    ctx->pc = 0x2F8560u;
    // 0x2f8560: 0x80860002  lb          $a2, 0x2($a0)
    ctx->pc = 0x2f8560u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2f8564: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2f8564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f8568: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f8568u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f856c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f856cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f8570: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F8570u;
    {
        const bool branch_taken_0x2f8570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8570) {
            ctx->pc = 0x2F85C4u;
            goto label_2f85c4;
        }
    }
    ctx->pc = 0x2F8578u;
    // 0x2f8578: 0x80880003  lb          $t0, 0x3($a0)
    ctx->pc = 0x2f8578u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2f857c: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x2f857cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2f8580: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f8580u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f8584: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f8584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f8588: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F8588u;
    {
        const bool branch_taken_0x2f8588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8588u;
            // 0x2f858c: 0x24c3ffd0  addiu       $v1, $a2, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8588) {
            ctx->pc = 0x2F85C4u;
            goto label_2f85c4;
        }
    }
    ctx->pc = 0x2F8590u;
    // 0x2f8590: 0x24e4ffd0  addiu       $a0, $a3, -0x30
    ctx->pc = 0x2f8590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x2f8594: 0x2522ffd0  addiu       $v0, $t1, -0x30
    ctx->pc = 0x2f8594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967248));
    // 0x2f8598: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2f8598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2f859c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2f859cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f85a0: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2f85a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f85a4: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2f85a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f85a8: 0x70661818  mult1       $v1, $v1, $a2
    ctx->pc = 0x2f85a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f85ac: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x2f85acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f85b0: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2f85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2f85b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f85b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f85b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f85bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F85BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F85C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F85BCu;
            // 0x2f85c0: 0x481021  addu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F85C4u;
label_2f85c4:
    // 0x2f85c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F85C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F85C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F85C4u;
            // 0x2f85c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F85CCu;
    // 0x2f85cc: 0x0  nop
    ctx->pc = 0x2f85ccu;
    // NOP
    ctx->pc = 0x2f85d0u;
}
