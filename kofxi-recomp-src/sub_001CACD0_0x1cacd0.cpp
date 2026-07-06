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

// Function: sub_001CACD0
// Address: 0x1cacd0 - 0x1cade0
void sub_001CACD0_0x1cacd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CACD0_0x1cacd0");
#endif

    switch (ctx->pc) {
        case 0x1cacd0u: goto label_1cacd0;
        case 0x1cacd4u: goto label_1cacd4;
        case 0x1cacd8u: goto label_1cacd8;
        case 0x1cacdcu: goto label_1cacdc;
        case 0x1cace0u: goto label_1cace0;
        case 0x1cace4u: goto label_1cace4;
        case 0x1cace8u: goto label_1cace8;
        case 0x1cacecu: goto label_1cacec;
        case 0x1cacf0u: goto label_1cacf0;
        case 0x1cacf4u: goto label_1cacf4;
        case 0x1cacf8u: goto label_1cacf8;
        case 0x1cacfcu: goto label_1cacfc;
        case 0x1cad00u: goto label_1cad00;
        case 0x1cad04u: goto label_1cad04;
        case 0x1cad08u: goto label_1cad08;
        case 0x1cad0cu: goto label_1cad0c;
        case 0x1cad10u: goto label_1cad10;
        case 0x1cad14u: goto label_1cad14;
        case 0x1cad18u: goto label_1cad18;
        case 0x1cad1cu: goto label_1cad1c;
        case 0x1cad20u: goto label_1cad20;
        case 0x1cad24u: goto label_1cad24;
        case 0x1cad28u: goto label_1cad28;
        case 0x1cad2cu: goto label_1cad2c;
        case 0x1cad30u: goto label_1cad30;
        case 0x1cad34u: goto label_1cad34;
        case 0x1cad38u: goto label_1cad38;
        case 0x1cad3cu: goto label_1cad3c;
        case 0x1cad40u: goto label_1cad40;
        case 0x1cad44u: goto label_1cad44;
        case 0x1cad48u: goto label_1cad48;
        case 0x1cad4cu: goto label_1cad4c;
        case 0x1cad50u: goto label_1cad50;
        case 0x1cad54u: goto label_1cad54;
        case 0x1cad58u: goto label_1cad58;
        case 0x1cad5cu: goto label_1cad5c;
        case 0x1cad60u: goto label_1cad60;
        case 0x1cad64u: goto label_1cad64;
        case 0x1cad68u: goto label_1cad68;
        case 0x1cad6cu: goto label_1cad6c;
        case 0x1cad70u: goto label_1cad70;
        case 0x1cad74u: goto label_1cad74;
        case 0x1cad78u: goto label_1cad78;
        case 0x1cad7cu: goto label_1cad7c;
        case 0x1cad80u: goto label_1cad80;
        case 0x1cad84u: goto label_1cad84;
        case 0x1cad88u: goto label_1cad88;
        case 0x1cad8cu: goto label_1cad8c;
        case 0x1cad90u: goto label_1cad90;
        case 0x1cad94u: goto label_1cad94;
        case 0x1cad98u: goto label_1cad98;
        case 0x1cad9cu: goto label_1cad9c;
        case 0x1cada0u: goto label_1cada0;
        case 0x1cada4u: goto label_1cada4;
        case 0x1cada8u: goto label_1cada8;
        case 0x1cadacu: goto label_1cadac;
        case 0x1cadb0u: goto label_1cadb0;
        case 0x1cadb4u: goto label_1cadb4;
        case 0x1cadb8u: goto label_1cadb8;
        case 0x1cadbcu: goto label_1cadbc;
        case 0x1cadc0u: goto label_1cadc0;
        case 0x1cadc4u: goto label_1cadc4;
        case 0x1cadc8u: goto label_1cadc8;
        case 0x1cadccu: goto label_1cadcc;
        case 0x1cadd0u: goto label_1cadd0;
        case 0x1cadd4u: goto label_1cadd4;
        case 0x1cadd8u: goto label_1cadd8;
        case 0x1caddcu: goto label_1caddc;
        default: break;
    }

    ctx->pc = 0x1cacd0u;

label_1cacd0:
    // 0x1cacd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cacd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cacd4:
    // 0x1cacd4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1cacd8:
    if (ctx->pc == 0x1CACD8u) {
        ctx->pc = 0x1CACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACD4u;
        // 0x1cacd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CACDCu;
        goto label_1cacdc;
    }
    ctx->pc = 0x1CACD4u;
    {
        const bool branch_taken_0x1cacd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACD4u;
        // 0x1cacd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacd4) {
            ctx->pc = 0x1CACF8u;
            goto label_1cacf8;
        }
    }
    ctx->pc = 0x1CACDCu;
label_1cacdc:
    // 0x1cacdc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cacdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cace0:
    // 0x1cace0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cace0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cace4:
    // 0x1cace4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cace4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cace8:
    // 0x1cace8: 0x2484b8f8  addiu       $a0, $a0, -0x4708
    ctx->pc = 0x1cace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949112));
label_1cacec:
    // 0x1cacec: 0x24a5b868  addiu       $a1, $a1, -0x4798
    ctx->pc = 0x1cacecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948968));
label_1cacf0:
    // 0x1cacf0: 0x8072a14  j           func_1CA850
label_1cacf4:
    if (ctx->pc == 0x1CACF4u) {
        ctx->pc = 0x1CACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACF0u;
        // 0x1cacf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CACF8u;
        goto label_1cacf8;
    }
    ctx->pc = 0x1CACF0u;
    ctx->pc = 0x1CACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACF0u;
    // 0x1cacf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    sub_001CA850_0x1ca850(rdram, ctx, runtime); return;
    ctx->pc = 0x1CACF8u;
label_1cacf8:
    // 0x1cacf8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cacf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1cacfc:
    // 0x1cacfc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1cad00:
    if (ctx->pc == 0x1CAD00u) {
        ctx->pc = 0x1CAD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACFCu;
        // 0x1cad00: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAD04u;
        goto label_1cad04;
    }
    ctx->pc = 0x1CACFCu;
    {
        const bool branch_taken_0x1cacfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cacfc) {
            ctx->pc = 0x1CAD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CACFCu;
            // 0x1cad00: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAD20u;
            goto label_1cad20;
        }
    }
    ctx->pc = 0x1CAD04u;
label_1cad04:
    // 0x1cad04: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cad04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cad08:
    // 0x1cad08: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cad08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cad0c:
    // 0x1cad0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cad0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cad10:
    // 0x1cad10: 0x2484b908  addiu       $a0, $a0, -0x46F8
    ctx->pc = 0x1cad10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949128));
label_1cad14:
    // 0x1cad14: 0x24a5b898  addiu       $a1, $a1, -0x4768
    ctx->pc = 0x1cad14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949016));
label_1cad18:
    // 0x1cad18: 0x8072a14  j           func_1CA850
label_1cad1c:
    if (ctx->pc == 0x1CAD1Cu) {
        ctx->pc = 0x1CAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD18u;
        // 0x1cad1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAD20u;
        goto label_1cad20;
    }
    ctx->pc = 0x1CAD18u;
    ctx->pc = 0x1CAD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD18u;
    // 0x1cad1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    sub_001CA850_0x1ca850(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAD20u;
label_1cad20:
    // 0x1cad20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cad20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cad24:
    // 0x1cad24: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1cad24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1cad28:
    // 0x1cad28: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1cad28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1cad2c:
    // 0x1cad2c: 0x3e00008  jr          $ra
label_1cad30:
    if (ctx->pc == 0x1CAD30u) {
        ctx->pc = 0x1CAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD2Cu;
        // 0x1cad30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAD34u;
        goto label_1cad34;
    }
    ctx->pc = 0x1CAD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD2Cu;
        // 0x1cad30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAD34u;
label_1cad34:
    // 0x1cad34: 0x0  nop
    ctx->pc = 0x1cad34u;
    // NOP
label_1cad38:
    // 0x1cad38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cad38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cad3c:
    // 0x1cad3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cad40:
    // 0x1cad40: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_1cad44:
    if (ctx->pc == 0x1CAD44u) {
        ctx->pc = 0x1CAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD40u;
        // 0x1cad44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAD48u;
        goto label_1cad48;
    }
    ctx->pc = 0x1CAD40u;
    {
        const bool branch_taken_0x1cad40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD40u;
        // 0x1cad44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad40) {
            ctx->pc = 0x1CAD50u;
            goto label_1cad50;
        }
    }
    ctx->pc = 0x1CAD48u;
label_1cad48:
    // 0x1cad48: 0x1000000a  b           . + 4 + (0xA << 2)
label_1cad4c:
    if (ctx->pc == 0x1CAD4Cu) {
        ctx->pc = 0x1CAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD48u;
        // 0x1cad4c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAD50u;
        goto label_1cad50;
    }
    ctx->pc = 0x1CAD48u;
    {
        const bool branch_taken_0x1cad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD48u;
        // 0x1cad4c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad48) {
            ctx->pc = 0x1CAD74u;
            goto label_1cad74;
        }
    }
    ctx->pc = 0x1CAD50u;
label_1cad50:
    // 0x1cad50: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1cad54:
    if (ctx->pc == 0x1CAD54u) {
        ctx->pc = 0x1CAD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD50u;
        // 0x1cad54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAD58u;
        goto label_1cad58;
    }
    ctx->pc = 0x1CAD50u;
    {
        const bool branch_taken_0x1cad50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD50u;
        // 0x1cad54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad50) {
            ctx->pc = 0x1CAD74u;
            goto label_1cad74;
        }
    }
    ctx->pc = 0x1CAD58u;
label_1cad58:
    // 0x1cad58: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1cad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1cad5c:
    // 0x1cad5c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1cad60:
    if (ctx->pc == 0x1CAD60u) {
        ctx->pc = 0x1CAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD5Cu;
        // 0x1cad60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAD64u;
        goto label_1cad64;
    }
    ctx->pc = 0x1CAD5Cu;
    {
        const bool branch_taken_0x1cad5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cad5c) {
            ctx->pc = 0x1CAD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAD5Cu;
            // 0x1cad60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAD74u;
            goto label_1cad74;
        }
    }
    ctx->pc = 0x1CAD64u;
label_1cad64:
    // 0x1cad64: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1cad64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1cad68:
    // 0x1cad68: 0x40f809  jalr        $v0
label_1cad6c:
    if (ctx->pc == 0x1CAD6Cu) {
        ctx->pc = 0x1CAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD68u;
        // 0x1cad6c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAD70u;
        goto label_1cad70;
    }
    ctx->pc = 0x1CAD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CAD70u);
        ctx->pc = 0x1CAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD68u;
        // 0x1cad6c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAD68u, 0x1CAD70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CAD70u;
label_1cad70:
    // 0x1cad70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cad70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cad74:
    // 0x1cad74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cad74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cad78:
    // 0x1cad78: 0x3e00008  jr          $ra
label_1cad7c:
    if (ctx->pc == 0x1CAD7Cu) {
        ctx->pc = 0x1CAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD78u;
        // 0x1cad7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAD80u;
        goto label_1cad80;
    }
    ctx->pc = 0x1CAD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD78u;
        // 0x1cad7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAD80u;
label_1cad80:
    // 0x1cad80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cad84:
    // 0x1cad84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cad84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cad88:
    // 0x1cad88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cad88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cad8c:
    // 0x1cad8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cad8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cad90:
    // 0x1cad90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cad90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cad94:
    // 0x1cad94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cad94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cad98:
    // 0x1cad98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cad98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cad9c:
    // 0x1cad9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cad9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cada0:
    // 0x1cada0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cada4:
    // 0x1cada4: 0xc0729fa  jal         func_1CA7E8
label_1cada8:
    if (ctx->pc == 0x1CADA8u) {
        ctx->pc = 0x1CADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADA4u;
        // 0x1cada8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CADACu;
        goto label_1cadac;
    }
    ctx->pc = 0x1CADA4u;
    SET_GPR_U32(ctx, 31, 0x1CADACu);
    ctx->pc = 0x1CADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADA4u;
    // 0x1cada8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CADA4u, 0x1CADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADACu;
label_1cadac:
    // 0x1cadac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cadacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cadb0:
    // 0x1cadb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cadb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cadb4:
    // 0x1cadb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cadb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cadb8:
    // 0x1cadb8: 0xc072b78  jal         func_1CADE0
label_1cadbc:
    if (ctx->pc == 0x1CADBCu) {
        ctx->pc = 0x1CADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADB8u;
        // 0x1cadbc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CADC0u;
        goto label_1cadc0;
    }
    ctx->pc = 0x1CADB8u;
    SET_GPR_U32(ctx, 31, 0x1CADC0u);
    ctx->pc = 0x1CADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADB8u;
    // 0x1cadbc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CADE0u, 0x1CADB8u, 0x1CADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADC0u;
label_1cadc0:
    // 0x1cadc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cadc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cadc4:
    // 0x1cadc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cadc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cadc8:
    // 0x1cadc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cadc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cadcc:
    // 0x1cadcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cadccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cadd0:
    // 0x1cadd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cadd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cadd4:
    // 0x1cadd4: 0x8072a00  j           func_1CA800
label_1cadd8:
    if (ctx->pc == 0x1CADD8u) {
        ctx->pc = 0x1CADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADD4u;
        // 0x1cadd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CADDCu;
        goto label_1caddc;
    }
    ctx->pc = 0x1CADD4u;
    ctx->pc = 0x1CADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADD4u;
    // 0x1cadd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CADDCu;
label_1caddc:
    // 0x1caddc: 0x0  nop
    ctx->pc = 0x1caddcu;
    // NOP
    if (ctx->pc == 0x1caddcu) { ctx->pc = 0x1cade0u; }
}
