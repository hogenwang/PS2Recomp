#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00351390
// Address: 0x351390 - 0x351420
void sub_00351390_0x351390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351390_0x351390");
#endif

    switch (ctx->pc) {
        case 0x3513a0u: goto label_3513a0;
        case 0x351404u: goto label_351404;
        case 0x351410u: goto label_351410;
        default: break;
    }

    ctx->pc = 0x351390u;

    // 0x351390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351398: 0xc0d4370  jal         func_350DC0
    ctx->pc = 0x351398u;
    SET_GPR_U32(ctx, 31, 0x3513A0u);
    ctx->pc = 0x350DC0u;
    if (runtime->hasFunction(0x350DC0u)) {
        auto targetFn = runtime->lookupFunction(0x350DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3513A0u; }
        if (ctx->pc != 0x3513A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350DC0_0x350dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3513A0u; }
        if (ctx->pc != 0x3513A0u) { return; }
    }
    ctx->pc = 0x3513A0u;
label_3513a0:
    // 0x3513a0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3513a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3513a4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x3513a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x3513a8: 0x90479490  lbu         $a3, -0x6B70($v0)
    ctx->pc = 0x3513a8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x3513ac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3513acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3513b0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3513b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3513b4: 0x24a5db78  addiu       $a1, $a1, -0x2488
    ctx->pc = 0x3513b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957944));
    // 0x3513b8: 0x2463db79  addiu       $v1, $v1, -0x2487
    ctx->pc = 0x3513b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957945));
    // 0x3513bc: 0x24845490  addiu       $a0, $a0, 0x5490
    ctx->pc = 0x3513bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21648));
    // 0x3513c0: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x3513c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3513c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3513c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3513c8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3513c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3513cc: 0x2442db7a  addiu       $v0, $v0, -0x2486
    ctx->pc = 0x3513ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957946));
    // 0x3513d0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x3513d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3513d4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3513d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3513d8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x3513d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3513dc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3513dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3513e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3513e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3513e4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3513e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3513e8: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3513e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3513ec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3513ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3513f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3513f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3513f4: 0xa3a5001c  sb          $a1, 0x1C($sp)
    ctx->pc = 0x3513f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 5));
    // 0x3513f8: 0xa3a3001d  sb          $v1, 0x1D($sp)
    ctx->pc = 0x3513f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x3513fc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x3513FCu;
    SET_GPR_U32(ctx, 31, 0x351404u);
    ctx->pc = 0x351400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3513FCu;
            // 0x351400: 0xa3a2001e  sb          $v0, 0x1E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351404u; }
        if (ctx->pc != 0x351404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351404u; }
        if (ctx->pc != 0x351404u) { return; }
    }
    ctx->pc = 0x351404u;
label_351404:
    // 0x351404: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x351404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x351408: 0xc0bb518  jal         func_2ED460
    ctx->pc = 0x351408u;
    SET_GPR_U32(ctx, 31, 0x351410u);
    ctx->pc = 0x35140Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351408u;
            // 0x35140c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED460u;
    if (runtime->hasFunction(0x2ED460u)) {
        auto targetFn = runtime->lookupFunction(0x2ED460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351410u; }
        if (ctx->pc != 0x351410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED460_0x2ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351410u; }
        if (ctx->pc != 0x351410u) { return; }
    }
    ctx->pc = 0x351410u;
label_351410:
    // 0x351410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351414: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x351414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x351418: 0x3e00008  jr          $ra
    ctx->pc = 0x351418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35141Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351418u;
            // 0x35141c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351420u;
    ctx->pc = 0x351420u;
}
