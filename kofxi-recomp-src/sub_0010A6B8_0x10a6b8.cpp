#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A6B8
// Address: 0x10a6b8 - 0x10a790
void sub_0010A6B8_0x10a6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A6B8_0x10a6b8");
#endif

    switch (ctx->pc) {
        case 0x10a6f4u: goto label_10a6f4;
        case 0x10a738u: goto label_10a738;
        case 0x10a748u: goto label_10a748;
        case 0x10a758u: goto label_10a758;
        case 0x10a770u: goto label_10a770;
        default: break;
    }

    ctx->pc = 0x10a6b8u;

    // 0x10a6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a6bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10a6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a6c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a6c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a6cc: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x10a6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x10a6d0: 0xae000878  sw          $zero, 0x878($s0)
    ctx->pc = 0x10a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2168), GPR_U32(ctx, 0));
    // 0x10a6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10a6dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10a6e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10a6e4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x10a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10a6e8: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x10a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x10a6ec: 0xc04272c  jal         func_109CB0
    ctx->pc = 0x10A6ECu;
    SET_GPR_U32(ctx, 31, 0x10A6F4u);
    ctx->pc = 0x10A6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6ECu;
            // 0x10a6f0: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109CB0u;
    if (runtime->hasFunction(0x109CB0u)) {
        auto targetFn = runtime->lookupFunction(0x109CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A6F4u; }
        if (ctx->pc != 0x10A6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109CB0_0x109cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A6F4u; }
        if (ctx->pc != 0x10A6F4u) { return; }
    }
    ctx->pc = 0x10A6F4u;
label_10a6f4:
    // 0x10a6f4: 0xae000858  sw          $zero, 0x858($s0)
    ctx->pc = 0x10a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2136), GPR_U32(ctx, 0));
    // 0x10a6f8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10a6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10a6fc: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x10a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x10a700: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x10a700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x10a704: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x10a704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x10a708: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x10a708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x10a70c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10a710: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10a710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10a714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a71c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10a71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10a720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a724: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x10a724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x10a728: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10a728u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x10a72c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A72Cu;
            // 0x10a730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A734u;
    // 0x10a734: 0x0  nop
    ctx->pc = 0x10a734u;
    // NOP
label_10a738:
    // 0x10a738: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10a738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a73c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A73Cu;
            // 0x10a740: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A744u;
    // 0x10a744: 0x0  nop
    ctx->pc = 0x10a744u;
    // NOP
label_10a748:
    // 0x10a748: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10a748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a74c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x10a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a750: 0x3e00008  jr          $ra
    ctx->pc = 0x10A750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A750u;
            // 0x10a754: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A758u;
label_10a758:
    // 0x10a758: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x10a758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a75c: 0xac4700b0  sw          $a3, 0xB0($v0)
    ctx->pc = 0x10a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 7));
    // 0x10a760: 0xac4500a8  sw          $a1, 0xA8($v0)
    ctx->pc = 0x10a760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 5));
    // 0x10a764: 0x3e00008  jr          $ra
    ctx->pc = 0x10A764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A764u;
            // 0x10a768: 0xac4600ac  sw          $a2, 0xAC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A76Cu;
    // 0x10a76c: 0x0  nop
    ctx->pc = 0x10a76cu;
    // NOP
label_10a770:
    // 0x10a770: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x10a770u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a774: 0x8d0200a8  lw          $v0, 0xA8($t0)
    ctx->pc = 0x10a774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 168)));
    // 0x10a778: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10a778u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x10a77c: 0x8d0300ac  lw          $v1, 0xAC($t0)
    ctx->pc = 0x10a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 172)));
    // 0x10a780: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x10a780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x10a784: 0x8d0200b0  lw          $v0, 0xB0($t0)
    ctx->pc = 0x10a784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x10a788: 0x3e00008  jr          $ra
    ctx->pc = 0x10A788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A788u;
            // 0x10a78c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A790u;
    ctx->pc = 0x10a790u;
}
