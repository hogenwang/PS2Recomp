#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE8B8
// Address: 0x1ce8b8 - 0x1ce950
void sub_001CE8B8_0x1ce8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE8B8_0x1ce8b8");
#endif

    switch (ctx->pc) {
        case 0x1ce8b8u: goto label_1ce8b8;
        case 0x1ce8bcu: goto label_1ce8bc;
        case 0x1ce8c0u: goto label_1ce8c0;
        case 0x1ce8c4u: goto label_1ce8c4;
        case 0x1ce8c8u: goto label_1ce8c8;
        case 0x1ce8ccu: goto label_1ce8cc;
        case 0x1ce8d0u: goto label_1ce8d0;
        case 0x1ce8d4u: goto label_1ce8d4;
        case 0x1ce8d8u: goto label_1ce8d8;
        case 0x1ce8dcu: goto label_1ce8dc;
        case 0x1ce8e0u: goto label_1ce8e0;
        case 0x1ce8e4u: goto label_1ce8e4;
        case 0x1ce8e8u: goto label_1ce8e8;
        case 0x1ce8ecu: goto label_1ce8ec;
        case 0x1ce8f0u: goto label_1ce8f0;
        case 0x1ce8f4u: goto label_1ce8f4;
        case 0x1ce8f8u: goto label_1ce8f8;
        case 0x1ce8fcu: goto label_1ce8fc;
        case 0x1ce900u: goto label_1ce900;
        case 0x1ce904u: goto label_1ce904;
        case 0x1ce908u: goto label_1ce908;
        case 0x1ce90cu: goto label_1ce90c;
        case 0x1ce910u: goto label_1ce910;
        case 0x1ce914u: goto label_1ce914;
        case 0x1ce918u: goto label_1ce918;
        case 0x1ce91cu: goto label_1ce91c;
        case 0x1ce920u: goto label_1ce920;
        case 0x1ce924u: goto label_1ce924;
        case 0x1ce928u: goto label_1ce928;
        case 0x1ce92cu: goto label_1ce92c;
        case 0x1ce930u: goto label_1ce930;
        case 0x1ce934u: goto label_1ce934;
        case 0x1ce938u: goto label_1ce938;
        case 0x1ce93cu: goto label_1ce93c;
        case 0x1ce940u: goto label_1ce940;
        case 0x1ce944u: goto label_1ce944;
        case 0x1ce948u: goto label_1ce948;
        case 0x1ce94cu: goto label_1ce94c;
        default: break;
    }

    ctx->pc = 0x1ce8b8u;

label_1ce8b8:
    // 0x1ce8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ce8bc:
    // 0x1ce8bc: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1ce8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
label_1ce8c0:
    // 0x1ce8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ce8c4:
    // 0x1ce8c4: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x1ce8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
label_1ce8c8:
    // 0x1ce8c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ce8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ce8cc:
    // 0x1ce8cc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1ce8d0:
    if (ctx->pc == 0x1CE8D0u) {
        ctx->pc = 0x1CE8D0u;
            // 0x1ce8d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1CE8D4u;
        goto label_1ce8d4;
    }
    ctx->pc = 0x1CE8CCu;
    {
        const bool branch_taken_0x1ce8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce8cc) {
            ctx->pc = 0x1CE8D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8CCu;
            // 0x1ce8d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE8E0u;
            goto label_1ce8e0;
        }
    }
    ctx->pc = 0x1CE8D4u;
label_1ce8d4:
    // 0x1ce8d4: 0x60f809  jalr        $v1
label_1ce8d8:
    if (ctx->pc == 0x1CE8D8u) {
        ctx->pc = 0x1CE8D8u;
            // 0x1ce8d8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x1CE8DCu;
        goto label_1ce8dc;
    }
    ctx->pc = 0x1CE8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CE8DCu);
        ctx->pc = 0x1CE8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8D4u;
            // 0x1ce8d8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE8DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8DCu; }
            if (ctx->pc != 0x1CE8DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1CE8DCu;
label_1ce8dc:
    // 0x1ce8dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce8e0:
    // 0x1ce8e0: 0x3e00008  jr          $ra
label_1ce8e4:
    if (ctx->pc == 0x1CE8E4u) {
        ctx->pc = 0x1CE8E4u;
            // 0x1ce8e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CE8E8u;
        goto label_1ce8e8;
    }
    ctx->pc = 0x1CE8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8E0u;
            // 0x1ce8e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE8E8u;
label_1ce8e8:
    // 0x1ce8e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ce8ec:
    // 0x1ce8ec: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1ce8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
label_1ce8f0:
    // 0x1ce8f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ce8f4:
    // 0x1ce8f4: 0x24428008  addiu       $v0, $v0, -0x7FF8
    ctx->pc = 0x1ce8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934536));
label_1ce8f8:
    // 0x1ce8f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ce8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ce8fc:
    // 0x1ce8fc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1ce900:
    if (ctx->pc == 0x1CE900u) {
        ctx->pc = 0x1CE900u;
            // 0x1ce900: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1CE904u;
        goto label_1ce904;
    }
    ctx->pc = 0x1CE8FCu;
    {
        const bool branch_taken_0x1ce8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce8fc) {
            ctx->pc = 0x1CE900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8FCu;
            // 0x1ce900: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE910u;
            goto label_1ce910;
        }
    }
    ctx->pc = 0x1CE904u;
label_1ce904:
    // 0x1ce904: 0x60f809  jalr        $v1
label_1ce908:
    if (ctx->pc == 0x1CE908u) {
        ctx->pc = 0x1CE908u;
            // 0x1ce908: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x1CE90Cu;
        goto label_1ce90c;
    }
    ctx->pc = 0x1CE904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CE90Cu);
        ctx->pc = 0x1CE908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE904u;
            // 0x1ce908: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE90Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE90Cu; }
            if (ctx->pc != 0x1CE90Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CE90Cu;
label_1ce90c:
    // 0x1ce90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce910:
    // 0x1ce910: 0x3e00008  jr          $ra
label_1ce914:
    if (ctx->pc == 0x1CE914u) {
        ctx->pc = 0x1CE914u;
            // 0x1ce914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CE918u;
        goto label_1ce918;
    }
    ctx->pc = 0x1CE910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE910u;
            // 0x1ce914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE918u;
label_1ce918:
    // 0x1ce918: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1ce918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1ce91c:
    // 0x1ce91c: 0x3e00008  jr          $ra
label_1ce920:
    if (ctx->pc == 0x1CE920u) {
        ctx->pc = 0x1CE920u;
            // 0x1ce920: 0x24427d60  addiu       $v0, $v0, 0x7D60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32096));
        ctx->pc = 0x1CE924u;
        goto label_1ce924;
    }
    ctx->pc = 0x1CE91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE91Cu;
            // 0x1ce920: 0x24427d60  addiu       $v0, $v0, 0x7D60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE924u;
label_1ce924:
    // 0x1ce924: 0x0  nop
    ctx->pc = 0x1ce924u;
    // NOP
label_1ce928:
    // 0x1ce928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ce92c:
    // 0x1ce92c: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1ce92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
label_1ce930:
    // 0x1ce930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ce934:
    // 0x1ce934: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ce934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1ce938:
    // 0x1ce938: 0x24638010  addiu       $v1, $v1, -0x7FF0
    ctx->pc = 0x1ce938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934544));
label_1ce93c:
    // 0x1ce93c: 0x2442bfe8  addiu       $v0, $v0, -0x4018
    ctx->pc = 0x1ce93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950888));
label_1ce940:
    // 0x1ce940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce944:
    // 0x1ce944: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ce944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ce948:
    // 0x1ce948: 0x8073a66  j           func_1CE998
label_1ce94c:
    if (ctx->pc == 0x1CE94Cu) {
        ctx->pc = 0x1CE94Cu;
            // 0x1ce94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CE950u;
        goto label_fallthrough_0x1ce948;
    }
    ctx->pc = 0x1CE948u;
    ctx->pc = 0x1CE94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE948u;
            // 0x1ce94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE998u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
label_fallthrough_0x1ce948:
    ctx->pc = 0x1CE950u;
    ctx->pc = 0x1ce950u;
}
