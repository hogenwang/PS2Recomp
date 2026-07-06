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

// Function: sub_001CB000
// Address: 0x1cb000 - 0x1cb168
void sub_001CB000_0x1cb000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB000_0x1cb000");
#endif

    switch (ctx->pc) {
        case 0x1cb000u: goto label_1cb000;
        case 0x1cb004u: goto label_1cb004;
        case 0x1cb008u: goto label_1cb008;
        case 0x1cb00cu: goto label_1cb00c;
        case 0x1cb010u: goto label_1cb010;
        case 0x1cb014u: goto label_1cb014;
        case 0x1cb018u: goto label_1cb018;
        case 0x1cb01cu: goto label_1cb01c;
        case 0x1cb020u: goto label_1cb020;
        case 0x1cb024u: goto label_1cb024;
        case 0x1cb028u: goto label_1cb028;
        case 0x1cb02cu: goto label_1cb02c;
        case 0x1cb030u: goto label_1cb030;
        case 0x1cb034u: goto label_1cb034;
        case 0x1cb038u: goto label_1cb038;
        case 0x1cb03cu: goto label_1cb03c;
        case 0x1cb040u: goto label_1cb040;
        case 0x1cb044u: goto label_1cb044;
        case 0x1cb048u: goto label_1cb048;
        case 0x1cb04cu: goto label_1cb04c;
        case 0x1cb050u: goto label_1cb050;
        case 0x1cb054u: goto label_1cb054;
        case 0x1cb058u: goto label_1cb058;
        case 0x1cb05cu: goto label_1cb05c;
        case 0x1cb060u: goto label_1cb060;
        case 0x1cb064u: goto label_1cb064;
        case 0x1cb068u: goto label_1cb068;
        case 0x1cb06cu: goto label_1cb06c;
        case 0x1cb070u: goto label_1cb070;
        case 0x1cb074u: goto label_1cb074;
        case 0x1cb078u: goto label_1cb078;
        case 0x1cb07cu: goto label_1cb07c;
        case 0x1cb080u: goto label_1cb080;
        case 0x1cb084u: goto label_1cb084;
        case 0x1cb088u: goto label_1cb088;
        case 0x1cb08cu: goto label_1cb08c;
        case 0x1cb090u: goto label_1cb090;
        case 0x1cb094u: goto label_1cb094;
        case 0x1cb098u: goto label_1cb098;
        case 0x1cb09cu: goto label_1cb09c;
        case 0x1cb0a0u: goto label_1cb0a0;
        case 0x1cb0a4u: goto label_1cb0a4;
        case 0x1cb0a8u: goto label_1cb0a8;
        case 0x1cb0acu: goto label_1cb0ac;
        case 0x1cb0b0u: goto label_1cb0b0;
        case 0x1cb0b4u: goto label_1cb0b4;
        case 0x1cb0b8u: goto label_1cb0b8;
        case 0x1cb0bcu: goto label_1cb0bc;
        case 0x1cb0c0u: goto label_1cb0c0;
        case 0x1cb0c4u: goto label_1cb0c4;
        case 0x1cb0c8u: goto label_1cb0c8;
        case 0x1cb0ccu: goto label_1cb0cc;
        case 0x1cb0d0u: goto label_1cb0d0;
        case 0x1cb0d4u: goto label_1cb0d4;
        case 0x1cb0d8u: goto label_1cb0d8;
        case 0x1cb0dcu: goto label_1cb0dc;
        case 0x1cb0e0u: goto label_1cb0e0;
        case 0x1cb0e4u: goto label_1cb0e4;
        case 0x1cb0e8u: goto label_1cb0e8;
        case 0x1cb0ecu: goto label_1cb0ec;
        case 0x1cb0f0u: goto label_1cb0f0;
        case 0x1cb0f4u: goto label_1cb0f4;
        case 0x1cb0f8u: goto label_1cb0f8;
        case 0x1cb0fcu: goto label_1cb0fc;
        case 0x1cb100u: goto label_1cb100;
        case 0x1cb104u: goto label_1cb104;
        case 0x1cb108u: goto label_1cb108;
        case 0x1cb10cu: goto label_1cb10c;
        case 0x1cb110u: goto label_1cb110;
        case 0x1cb114u: goto label_1cb114;
        case 0x1cb118u: goto label_1cb118;
        case 0x1cb11cu: goto label_1cb11c;
        case 0x1cb120u: goto label_1cb120;
        case 0x1cb124u: goto label_1cb124;
        case 0x1cb128u: goto label_1cb128;
        case 0x1cb12cu: goto label_1cb12c;
        case 0x1cb130u: goto label_1cb130;
        case 0x1cb134u: goto label_1cb134;
        case 0x1cb138u: goto label_1cb138;
        case 0x1cb13cu: goto label_1cb13c;
        case 0x1cb140u: goto label_1cb140;
        case 0x1cb144u: goto label_1cb144;
        case 0x1cb148u: goto label_1cb148;
        case 0x1cb14cu: goto label_1cb14c;
        case 0x1cb150u: goto label_1cb150;
        case 0x1cb154u: goto label_1cb154;
        case 0x1cb158u: goto label_1cb158;
        case 0x1cb15cu: goto label_1cb15c;
        case 0x1cb160u: goto label_1cb160;
        case 0x1cb164u: goto label_1cb164;
        default: break;
    }

    ctx->pc = 0x1cb000u;

label_1cb000:
    // 0x1cb000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cb004:
    // 0x1cb004: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1cb004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb008:
    // 0x1cb008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cb00c:
    // 0x1cb00c: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_1cb010:
    if (ctx->pc == 0x1CB010u) {
        ctx->pc = 0x1CB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB00Cu;
        // 0x1cb010: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB014u;
        goto label_1cb014;
    }
    ctx->pc = 0x1CB00Cu;
    {
        const bool branch_taken_0x1cb00c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB00Cu;
        // 0x1cb010: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb00c) {
            ctx->pc = 0x1CB030u;
            goto label_1cb030;
        }
    }
    ctx->pc = 0x1CB014u;
label_1cb014:
    // 0x1cb014: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cb018:
    // 0x1cb018: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cb01c:
    // 0x1cb01c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb020:
    // 0x1cb020: 0x2484b958  addiu       $a0, $a0, -0x46A8
    ctx->pc = 0x1cb020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949208));
label_1cb024:
    // 0x1cb024: 0x24a5b868  addiu       $a1, $a1, -0x4798
    ctx->pc = 0x1cb024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948968));
label_1cb028:
    // 0x1cb028: 0x8072a14  j           func_1CA850
label_1cb02c:
    if (ctx->pc == 0x1CB02Cu) {
        ctx->pc = 0x1CB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB028u;
        // 0x1cb02c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB030u;
        goto label_1cb030;
    }
    ctx->pc = 0x1CB028u;
    ctx->pc = 0x1CB02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB028u;
    // 0x1cb02c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    sub_001CA850_0x1ca850(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB030u;
label_1cb030:
    // 0x1cb030: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1cb030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1cb034:
    // 0x1cb034: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1cb038:
    if (ctx->pc == 0x1CB038u) {
        ctx->pc = 0x1CB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB034u;
        // 0x1cb038: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB03Cu;
        goto label_1cb03c;
    }
    ctx->pc = 0x1CB034u;
    {
        const bool branch_taken_0x1cb034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb034) {
            ctx->pc = 0x1CB038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB034u;
            // 0x1cb038: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB058u;
            goto label_1cb058;
        }
    }
    ctx->pc = 0x1CB03Cu;
label_1cb03c:
    // 0x1cb03c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cb040:
    // 0x1cb040: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cb044:
    // 0x1cb044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb048:
    // 0x1cb048: 0x2484b968  addiu       $a0, $a0, -0x4698
    ctx->pc = 0x1cb048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949224));
label_1cb04c:
    // 0x1cb04c: 0x24a5b898  addiu       $a1, $a1, -0x4768
    ctx->pc = 0x1cb04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949016));
label_1cb050:
    // 0x1cb050: 0x8072a14  j           func_1CA850
label_1cb054:
    if (ctx->pc == 0x1CB054u) {
        ctx->pc = 0x1CB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB050u;
        // 0x1cb054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB058u;
        goto label_1cb058;
    }
    ctx->pc = 0x1CB050u;
    ctx->pc = 0x1CB054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB050u;
    // 0x1cb054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    sub_001CA850_0x1ca850(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB058u;
label_1cb058:
    // 0x1cb058: 0x18c00026  blez        $a2, . + 4 + (0x26 << 2)
label_1cb05c:
    if (ctx->pc == 0x1CB05Cu) {
        ctx->pc = 0x1CB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB058u;
        // 0x1cb05c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB060u;
        goto label_1cb060;
    }
    ctx->pc = 0x1CB058u;
    {
        const bool branch_taken_0x1cb058 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1CB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB058u;
        // 0x1cb05c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb058) {
            ctx->pc = 0x1CB0F4u;
            goto label_1cb0f4;
        }
    }
    ctx->pc = 0x1CB060u;
label_1cb060:
    // 0x1cb060: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x1cb060u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cb064:
    // 0x1cb064: 0x11200023  beqz        $t1, . + 4 + (0x23 << 2)
label_1cb068:
    if (ctx->pc == 0x1CB068u) {
        ctx->pc = 0x1CB06Cu;
        goto label_1cb06c;
    }
    ctx->pc = 0x1CB064u;
    {
        const bool branch_taken_0x1cb064 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb064) {
            ctx->pc = 0x1CB0F4u;
            goto label_1cb0f4;
        }
    }
    ctx->pc = 0x1CB06Cu;
label_1cb06c:
    // 0x1cb06c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_1cb070:
    if (ctx->pc == 0x1CB070u) {
        ctx->pc = 0x1CB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB06Cu;
        // 0x1cb070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB074u;
        goto label_1cb074;
    }
    ctx->pc = 0x1CB06Cu;
    {
        const bool branch_taken_0x1cb06c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB06Cu;
        // 0x1cb070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb06c) {
            ctx->pc = 0x1CB0B8u;
            goto label_1cb0b8;
        }
    }
    ctx->pc = 0x1CB074u;
label_1cb074:
    // 0x1cb074: 0x54a20018  bnel        $a1, $v0, . + 4 + (0x18 << 2)
label_1cb078:
    if (ctx->pc == 0x1CB078u) {
        ctx->pc = 0x1CB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB074u;
        // 0x1cb078: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB07Cu;
        goto label_1cb07c;
    }
    ctx->pc = 0x1CB074u;
    {
        const bool branch_taken_0x1cb074 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb074) {
            ctx->pc = 0x1CB078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB074u;
            // 0x1cb078: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB0D8u;
            goto label_1cb0d8;
        }
    }
    ctx->pc = 0x1CB07Cu;
label_1cb07c:
    // 0x1cb07c: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x1cb07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_1cb080:
    // 0x1cb080: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x1cb080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1cb084:
    // 0x1cb084: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x1cb084u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1cb088:
    // 0x1cb088: 0x8d060014  lw          $a2, 0x14($t0)
    ctx->pc = 0x1cb088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_1cb08c:
    // 0x1cb08c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1cb08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_1cb090:
    // 0x1cb090: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x1cb090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_1cb094:
    // 0x1cb094: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x1cb094u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1cb098:
    // 0x1cb098: 0x1263023  subu        $a2, $t1, $a2
    ctx->pc = 0x1cb098u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_1cb09c:
    // 0x1cb09c: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x1cb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
label_1cb0a0:
    // 0x1cb0a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cb0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cb0a4:
    // 0x1cb0a4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cb0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1cb0a8:
    // 0x1cb0a8: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x1cb0a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1cb0ac:
    // 0x1cb0ac: 0xe3280b  movn        $a1, $a3, $v1
    ctx->pc = 0x1cb0acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1cb0b0:
    // 0x1cb0b0: 0x10860010  beq         $a0, $a2, . + 4 + (0x10 << 2)
label_1cb0b4:
    if (ctx->pc == 0x1CB0B4u) {
        ctx->pc = 0x1CB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0B0u;
        // 0x1cb0b4: 0xad05000c  sw          $a1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB0B8u;
        goto label_1cb0b8;
    }
    ctx->pc = 0x1CB0B0u;
    {
        const bool branch_taken_0x1cb0b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x1CB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0B0u;
        // 0x1cb0b4: 0xad05000c  sw          $a1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0b0) {
            ctx->pc = 0x1CB0F4u;
            goto label_1cb0f4;
        }
    }
    ctx->pc = 0x1CB0B8u;
label_1cb0b8:
    // 0x1cb0b8: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x1cb0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_1cb0bc:
    // 0x1cb0bc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1cb0c0:
    if (ctx->pc == 0x1CB0C0u) {
        ctx->pc = 0x1CB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0BCu;
        // 0x1cb0c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB0C4u;
        goto label_1cb0c4;
    }
    ctx->pc = 0x1CB0BCu;
    {
        const bool branch_taken_0x1cb0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb0bc) {
            ctx->pc = 0x1CB0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB0BCu;
            // 0x1cb0c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB0F4u;
            goto label_1cb0f4;
        }
    }
    ctx->pc = 0x1CB0C4u;
label_1cb0c4:
    // 0x1cb0c4: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x1cb0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_1cb0c8:
    // 0x1cb0c8: 0x40f809  jalr        $v0
label_1cb0cc:
    if (ctx->pc == 0x1CB0CCu) {
        ctx->pc = 0x1CB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0C8u;
        // 0x1cb0cc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB0D0u;
        goto label_1cb0d0;
    }
    ctx->pc = 0x1CB0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB0D0u);
        ctx->pc = 0x1CB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0C8u;
        // 0x1cb0cc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB0C8u, 0x1CB0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CB0D0u;
label_1cb0d0:
    // 0x1cb0d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cb0d4:
    if (ctx->pc == 0x1CB0D4u) {
        ctx->pc = 0x1CB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0D0u;
        // 0x1cb0d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB0D8u;
        goto label_1cb0d8;
    }
    ctx->pc = 0x1CB0D0u;
    {
        const bool branch_taken_0x1cb0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0D0u;
        // 0x1cb0d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0d0) {
            ctx->pc = 0x1CB0F4u;
            goto label_1cb0f4;
        }
    }
    ctx->pc = 0x1CB0D8u;
label_1cb0d8:
    // 0x1cb0d8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1cb0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1cb0dc:
    // 0x1cb0dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1cb0e0:
    if (ctx->pc == 0x1CB0E0u) {
        ctx->pc = 0x1CB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0DCu;
        // 0x1cb0e0: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB0E4u;
        goto label_1cb0e4;
    }
    ctx->pc = 0x1CB0DCu;
    {
        const bool branch_taken_0x1cb0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0DCu;
        // 0x1cb0e0: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0dc) {
            ctx->pc = 0x1CB0F0u;
            goto label_1cb0f0;
        }
    }
    ctx->pc = 0x1CB0E4u;
label_1cb0e4:
    // 0x1cb0e4: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x1cb0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_1cb0e8:
    // 0x1cb0e8: 0x40f809  jalr        $v0
label_1cb0ec:
    if (ctx->pc == 0x1CB0ECu) {
        ctx->pc = 0x1CB0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0E8u;
        // 0x1cb0ec: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB0F0u;
        goto label_1cb0f0;
    }
    ctx->pc = 0x1CB0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB0F0u);
        ctx->pc = 0x1CB0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0E8u;
        // 0x1cb0ec: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB0E8u, 0x1CB0F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CB0F0u;
label_1cb0f0:
    // 0x1cb0f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb0f4:
    // 0x1cb0f4: 0x3e00008  jr          $ra
label_1cb0f8:
    if (ctx->pc == 0x1CB0F8u) {
        ctx->pc = 0x1CB0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0F4u;
        // 0x1cb0f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB0FCu;
        goto label_1cb0fc;
    }
    ctx->pc = 0x1CB0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0F4u;
        // 0x1cb0f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB0FCu;
label_1cb0fc:
    // 0x1cb0fc: 0x0  nop
    ctx->pc = 0x1cb0fcu;
    // NOP
label_1cb100:
    // 0x1cb100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cb104:
    // 0x1cb104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cb108:
    // 0x1cb108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb10c:
    // 0x1cb10c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cb110:
    // 0x1cb110: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cb110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cb114:
    // 0x1cb114: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cb118:
    // 0x1cb118: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cb118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cb11c:
    // 0x1cb11c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cb11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cb120:
    // 0x1cb120: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cb120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cb124:
    // 0x1cb124: 0xc0729fa  jal         func_1CA7E8
label_1cb128:
    if (ctx->pc == 0x1CB128u) {
        ctx->pc = 0x1CB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB124u;
        // 0x1cb128: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB12Cu;
        goto label_1cb12c;
    }
    ctx->pc = 0x1CB124u;
    SET_GPR_U32(ctx, 31, 0x1CB12Cu);
    ctx->pc = 0x1CB128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB124u;
    // 0x1cb128: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CB124u, 0x1CB12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB12Cu;
label_1cb12c:
    // 0x1cb12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cb130:
    // 0x1cb130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb134:
    // 0x1cb134: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cb134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cb138:
    // 0x1cb138: 0xc072c5a  jal         func_1CB168
label_1cb13c:
    if (ctx->pc == 0x1CB13Cu) {
        ctx->pc = 0x1CB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB138u;
        // 0x1cb13c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB140u;
        goto label_1cb140;
    }
    ctx->pc = 0x1CB138u;
    SET_GPR_U32(ctx, 31, 0x1CB140u);
    ctx->pc = 0x1CB13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB138u;
    // 0x1cb13c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB168u, 0x1CB138u, 0x1CB140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB140u;
label_1cb140:
    // 0x1cb140: 0xc072a00  jal         func_1CA800
label_1cb144:
    if (ctx->pc == 0x1CB144u) {
        ctx->pc = 0x1CB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB140u;
        // 0x1cb144: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB148u;
        goto label_1cb148;
    }
    ctx->pc = 0x1CB140u;
    SET_GPR_U32(ctx, 31, 0x1CB148u);
    ctx->pc = 0x1CB144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB140u;
    // 0x1cb144: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA800u, 0x1CB140u, 0x1CB148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB148u;
label_1cb148:
    // 0x1cb148: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cb14c:
    // 0x1cb14c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cb14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cb150:
    // 0x1cb150: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb154:
    // 0x1cb154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb158:
    // 0x1cb158: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cb158u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cb15c:
    // 0x1cb15c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb160:
    // 0x1cb160: 0x3e00008  jr          $ra
label_1cb164:
    if (ctx->pc == 0x1CB164u) {
        ctx->pc = 0x1CB164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB160u;
        // 0x1cb164: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB168u;
        goto label_fallthrough_0x1cb160;
    }
    ctx->pc = 0x1CB160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB160u;
        // 0x1cb164: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cb160:
    ctx->pc = 0x1CB168u;
}
