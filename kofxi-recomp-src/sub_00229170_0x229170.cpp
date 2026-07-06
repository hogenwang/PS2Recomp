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

// Function: sub_00229170
// Address: 0x229170 - 0x229250
void sub_00229170_0x229170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229170_0x229170");
#endif

    switch (ctx->pc) {
        case 0x229190u: goto label_229190;
        case 0x2291dcu: goto label_2291dc;
        case 0x2291ecu: goto label_2291ec;
        case 0x229214u: goto label_229214;
        case 0x229238u: goto label_229238;
        default: break;
    }

    ctx->pc = 0x229170u;

    // 0x229170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x229170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x229174: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x229174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x229178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x229178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22917c: 0x8c62a768  lw          $v0, -0x5898($v1)
    ctx->pc = 0x22917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944616)));
    // 0x229180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x229180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x229184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x229188: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x229188u;
    {
        const bool branch_taken_0x229188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229188u;
        // 0x22918c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229188) {
            ctx->pc = 0x2291ACu;
            goto label_2291ac;
        }
    }
    ctx->pc = 0x229190u;
label_229190:
    // 0x229190: 0x0  nop
    ctx->pc = 0x229190u;
    // NOP
    // 0x229194: 0x0  nop
    ctx->pc = 0x229194u;
    // NOP
    // 0x229198: 0x0  nop
    ctx->pc = 0x229198u;
    // NOP
    // 0x22919c: 0x0  nop
    ctx->pc = 0x22919cu;
    // NOP
    // 0x2291a0: 0x0  nop
    ctx->pc = 0x2291a0u;
    // NOP
    // 0x2291a4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x2291A4u;
    {
        const bool branch_taken_0x2291a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2291a4) {
            ctx->pc = 0x229190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_229190;
        }
    }
    ctx->pc = 0x2291ACu;
label_2291ac:
    // 0x2291ac: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2291acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2291b0: 0x8c63a724  lw          $v1, -0x58DC($v1)
    ctx->pc = 0x2291b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944548)));
    // 0x2291b4: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x2291b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2291b8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2291b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2291bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2291BCu;
    {
        const bool branch_taken_0x2291bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2291C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291BCu;
        // 0x2291c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291bc) {
            ctx->pc = 0x2291F0u;
            goto label_2291f0;
        }
    }
    ctx->pc = 0x2291C4u;
    // 0x2291c4: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x2291c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2291c8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2291c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2291cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2291CCu;
    {
        const bool branch_taken_0x2291cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2291cc) {
            ctx->pc = 0x2291E4u;
            goto label_2291e4;
        }
    }
    ctx->pc = 0x2291D4u;
    // 0x2291d4: 0xc08a36e  jal         func_228DB8
    ctx->pc = 0x2291D4u;
    SET_GPR_U32(ctx, 31, 0x2291DCu);
    ctx->pc = 0x2291D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291D4u;
    // 0x2291d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228DB8u, 0x2291D4u, 0x2291DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291DCu;
label_2291dc:
    // 0x2291dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2291DCu;
    {
        const bool branch_taken_0x2291dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2291E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291DCu;
        // 0x2291e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291dc) {
            ctx->pc = 0x2291F0u;
            goto label_2291f0;
        }
    }
    ctx->pc = 0x2291E4u;
label_2291e4:
    // 0x2291e4: 0xc08a2ec  jal         func_228BB0
    ctx->pc = 0x2291E4u;
    SET_GPR_U32(ctx, 31, 0x2291ECu);
    ctx->pc = 0x2291E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291E4u;
    // 0x2291e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228BB0u, 0x2291E4u, 0x2291ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291ECu;
label_2291ec:
    // 0x2291ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2291ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2291f0:
    // 0x2291f0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2291f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2291f4: 0x8c43a764  lw          $v1, -0x589C($v0)
    ctx->pc = 0x2291f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944612)));
    // 0x2291f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2291F8u;
    {
        const bool branch_taken_0x2291f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2291FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291F8u;
        // 0x2291fc: 0x3c0201c1  lui         $v0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291f8) {
            ctx->pc = 0x229218u;
            goto label_229218;
        }
    }
    ctx->pc = 0x229200u;
    // 0x229200: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x229200u;
    {
        const bool branch_taken_0x229200 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x229204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229200u;
        // 0x229204: 0x8c43a778  lw          $v1, -0x5888($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229200) {
            ctx->pc = 0x22921Cu;
            goto label_22921c;
        }
    }
    ctx->pc = 0x229208u;
    // 0x229208: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x229208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22920c: 0xc08a29c  jal         func_228A70
    ctx->pc = 0x22920Cu;
    SET_GPR_U32(ctx, 31, 0x229214u);
    ctx->pc = 0x229210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22920Cu;
    // 0x229210: 0x24844350  addiu       $a0, $a0, 0x4350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228A70u, 0x22920Cu, 0x229214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229214u;
label_229214:
    // 0x229214: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x229214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_229218:
    // 0x229218: 0x8c43a778  lw          $v1, -0x5888($v0)
    ctx->pc = 0x229218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944632)));
label_22921c:
    // 0x22921c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22921Cu;
    {
        const bool branch_taken_0x22921c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22921Cu;
        // 0x229220: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22921c) {
            ctx->pc = 0x22923Cu;
            goto label_22923c;
        }
    }
    ctx->pc = 0x229224u;
    // 0x229224: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x229224u;
    {
        const bool branch_taken_0x229224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x229228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229224u;
        // 0x229228: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229224) {
            ctx->pc = 0x22923Cu;
            goto label_22923c;
        }
    }
    ctx->pc = 0x22922Cu;
    // 0x22922c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22922cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229230: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x229230u;
    SET_GPR_U32(ctx, 31, 0x229238u);
    ctx->pc = 0x229234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229230u;
    // 0x229234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x229230u, 0x229238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229238u;
label_229238:
    // 0x229238: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x229238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22923c:
    // 0x22923c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22923cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229240: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x229240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229248: 0x3e00008  jr          $ra
    ctx->pc = 0x229248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229248u;
        // 0x22924c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229250u;
}
