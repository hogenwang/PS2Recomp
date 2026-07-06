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

// Function: sub_0027FCA0
// Address: 0x27fca0 - 0x27ff40
void sub_0027FCA0_0x27fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FCA0_0x27fca0");
#endif

    switch (ctx->pc) {
        case 0x27fca0u: goto label_27fca0;
        case 0x27fca4u: goto label_27fca4;
        case 0x27fca8u: goto label_27fca8;
        case 0x27fcacu: goto label_27fcac;
        case 0x27fcb0u: goto label_27fcb0;
        case 0x27fcb4u: goto label_27fcb4;
        case 0x27fcb8u: goto label_27fcb8;
        case 0x27fcbcu: goto label_27fcbc;
        case 0x27fcc0u: goto label_27fcc0;
        case 0x27fcc4u: goto label_27fcc4;
        case 0x27fcc8u: goto label_27fcc8;
        case 0x27fcccu: goto label_27fccc;
        case 0x27fcd0u: goto label_27fcd0;
        case 0x27fcd4u: goto label_27fcd4;
        case 0x27fcd8u: goto label_27fcd8;
        case 0x27fcdcu: goto label_27fcdc;
        case 0x27fce0u: goto label_27fce0;
        case 0x27fce4u: goto label_27fce4;
        case 0x27fce8u: goto label_27fce8;
        case 0x27fcecu: goto label_27fcec;
        case 0x27fcf0u: goto label_27fcf0;
        case 0x27fcf4u: goto label_27fcf4;
        case 0x27fcf8u: goto label_27fcf8;
        case 0x27fcfcu: goto label_27fcfc;
        case 0x27fd00u: goto label_27fd00;
        case 0x27fd04u: goto label_27fd04;
        case 0x27fd08u: goto label_27fd08;
        case 0x27fd0cu: goto label_27fd0c;
        case 0x27fd10u: goto label_27fd10;
        case 0x27fd14u: goto label_27fd14;
        case 0x27fd18u: goto label_27fd18;
        case 0x27fd1cu: goto label_27fd1c;
        case 0x27fd20u: goto label_27fd20;
        case 0x27fd24u: goto label_27fd24;
        case 0x27fd28u: goto label_27fd28;
        case 0x27fd2cu: goto label_27fd2c;
        case 0x27fd30u: goto label_27fd30;
        case 0x27fd34u: goto label_27fd34;
        case 0x27fd38u: goto label_27fd38;
        case 0x27fd3cu: goto label_27fd3c;
        case 0x27fd40u: goto label_27fd40;
        case 0x27fd44u: goto label_27fd44;
        case 0x27fd48u: goto label_27fd48;
        case 0x27fd4cu: goto label_27fd4c;
        case 0x27fd50u: goto label_27fd50;
        case 0x27fd54u: goto label_27fd54;
        case 0x27fd58u: goto label_27fd58;
        case 0x27fd5cu: goto label_27fd5c;
        case 0x27fd60u: goto label_27fd60;
        case 0x27fd64u: goto label_27fd64;
        case 0x27fd68u: goto label_27fd68;
        case 0x27fd6cu: goto label_27fd6c;
        case 0x27fd70u: goto label_27fd70;
        case 0x27fd74u: goto label_27fd74;
        case 0x27fd78u: goto label_27fd78;
        case 0x27fd7cu: goto label_27fd7c;
        case 0x27fd80u: goto label_27fd80;
        case 0x27fd84u: goto label_27fd84;
        case 0x27fd88u: goto label_27fd88;
        case 0x27fd8cu: goto label_27fd8c;
        case 0x27fd90u: goto label_27fd90;
        case 0x27fd94u: goto label_27fd94;
        case 0x27fd98u: goto label_27fd98;
        case 0x27fd9cu: goto label_27fd9c;
        case 0x27fda0u: goto label_27fda0;
        case 0x27fda4u: goto label_27fda4;
        case 0x27fda8u: goto label_27fda8;
        case 0x27fdacu: goto label_27fdac;
        case 0x27fdb0u: goto label_27fdb0;
        case 0x27fdb4u: goto label_27fdb4;
        case 0x27fdb8u: goto label_27fdb8;
        case 0x27fdbcu: goto label_27fdbc;
        case 0x27fdc0u: goto label_27fdc0;
        case 0x27fdc4u: goto label_27fdc4;
        case 0x27fdc8u: goto label_27fdc8;
        case 0x27fdccu: goto label_27fdcc;
        case 0x27fdd0u: goto label_27fdd0;
        case 0x27fdd4u: goto label_27fdd4;
        case 0x27fdd8u: goto label_27fdd8;
        case 0x27fddcu: goto label_27fddc;
        case 0x27fde0u: goto label_27fde0;
        case 0x27fde4u: goto label_27fde4;
        case 0x27fde8u: goto label_27fde8;
        case 0x27fdecu: goto label_27fdec;
        case 0x27fdf0u: goto label_27fdf0;
        case 0x27fdf4u: goto label_27fdf4;
        case 0x27fdf8u: goto label_27fdf8;
        case 0x27fdfcu: goto label_27fdfc;
        case 0x27fe00u: goto label_27fe00;
        case 0x27fe04u: goto label_27fe04;
        case 0x27fe08u: goto label_27fe08;
        case 0x27fe0cu: goto label_27fe0c;
        case 0x27fe10u: goto label_27fe10;
        case 0x27fe14u: goto label_27fe14;
        case 0x27fe18u: goto label_27fe18;
        case 0x27fe1cu: goto label_27fe1c;
        case 0x27fe20u: goto label_27fe20;
        case 0x27fe24u: goto label_27fe24;
        case 0x27fe28u: goto label_27fe28;
        case 0x27fe2cu: goto label_27fe2c;
        case 0x27fe30u: goto label_27fe30;
        case 0x27fe34u: goto label_27fe34;
        case 0x27fe38u: goto label_27fe38;
        case 0x27fe3cu: goto label_27fe3c;
        case 0x27fe40u: goto label_27fe40;
        case 0x27fe44u: goto label_27fe44;
        case 0x27fe48u: goto label_27fe48;
        case 0x27fe4cu: goto label_27fe4c;
        case 0x27fe50u: goto label_27fe50;
        case 0x27fe54u: goto label_27fe54;
        case 0x27fe58u: goto label_27fe58;
        case 0x27fe5cu: goto label_27fe5c;
        case 0x27fe60u: goto label_27fe60;
        case 0x27fe64u: goto label_27fe64;
        case 0x27fe68u: goto label_27fe68;
        case 0x27fe6cu: goto label_27fe6c;
        case 0x27fe70u: goto label_27fe70;
        case 0x27fe74u: goto label_27fe74;
        case 0x27fe78u: goto label_27fe78;
        case 0x27fe7cu: goto label_27fe7c;
        case 0x27fe80u: goto label_27fe80;
        case 0x27fe84u: goto label_27fe84;
        case 0x27fe88u: goto label_27fe88;
        case 0x27fe8cu: goto label_27fe8c;
        case 0x27fe90u: goto label_27fe90;
        case 0x27fe94u: goto label_27fe94;
        case 0x27fe98u: goto label_27fe98;
        case 0x27fe9cu: goto label_27fe9c;
        case 0x27fea0u: goto label_27fea0;
        case 0x27fea4u: goto label_27fea4;
        case 0x27fea8u: goto label_27fea8;
        case 0x27feacu: goto label_27feac;
        case 0x27feb0u: goto label_27feb0;
        case 0x27feb4u: goto label_27feb4;
        case 0x27feb8u: goto label_27feb8;
        case 0x27febcu: goto label_27febc;
        case 0x27fec0u: goto label_27fec0;
        case 0x27fec4u: goto label_27fec4;
        case 0x27fec8u: goto label_27fec8;
        case 0x27feccu: goto label_27fecc;
        case 0x27fed0u: goto label_27fed0;
        case 0x27fed4u: goto label_27fed4;
        case 0x27fed8u: goto label_27fed8;
        case 0x27fedcu: goto label_27fedc;
        case 0x27fee0u: goto label_27fee0;
        case 0x27fee4u: goto label_27fee4;
        case 0x27fee8u: goto label_27fee8;
        case 0x27feecu: goto label_27feec;
        case 0x27fef0u: goto label_27fef0;
        case 0x27fef4u: goto label_27fef4;
        case 0x27fef8u: goto label_27fef8;
        case 0x27fefcu: goto label_27fefc;
        case 0x27ff00u: goto label_27ff00;
        case 0x27ff04u: goto label_27ff04;
        case 0x27ff08u: goto label_27ff08;
        case 0x27ff0cu: goto label_27ff0c;
        case 0x27ff10u: goto label_27ff10;
        case 0x27ff14u: goto label_27ff14;
        case 0x27ff18u: goto label_27ff18;
        case 0x27ff1cu: goto label_27ff1c;
        case 0x27ff20u: goto label_27ff20;
        case 0x27ff24u: goto label_27ff24;
        case 0x27ff28u: goto label_27ff28;
        case 0x27ff2cu: goto label_27ff2c;
        case 0x27ff30u: goto label_27ff30;
        case 0x27ff34u: goto label_27ff34;
        case 0x27ff38u: goto label_27ff38;
        case 0x27ff3cu: goto label_27ff3c;
        default: break;
    }

    ctx->pc = 0x27fca0u;

label_27fca0:
    // 0x27fca0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x27fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_27fca4:
    // 0x27fca4: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x27fca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_27fca8:
    // 0x27fca8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x27fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_27fcac:
    // 0x27fcac: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x27fcacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27fcb0:
    // 0x27fcb0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x27fcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_27fcb4:
    // 0x27fcb4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x27fcb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27fcb8:
    // 0x27fcb8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x27fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_27fcbc:
    // 0x27fcbc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x27fcbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27fcc0:
    // 0x27fcc0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x27fcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_27fcc4:
    // 0x27fcc4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x27fcc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fcc8:
    // 0x27fcc8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x27fcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_27fccc:
    // 0x27fccc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27fcccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fcd0:
    // 0x27fcd0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x27fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_27fcd4:
    // 0x27fcd4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27fcd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fcd8:
    // 0x27fcd8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x27fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_27fcdc:
    // 0x27fcdc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x27fcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_27fce0:
    // 0x27fce0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27fce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fce4:
    // 0x27fce4: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x27fce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_27fce8:
    // 0x27fce8: 0xc0a32b4  jal         func_28CAD0
label_27fcec:
    if (ctx->pc == 0x27FCECu) {
        ctx->pc = 0x27FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCE8u;
        // 0x27fcec: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FCF0u;
        goto label_27fcf0;
    }
    ctx->pc = 0x27FCE8u;
    SET_GPR_U32(ctx, 31, 0x27FCF0u);
    ctx->pc = 0x27FCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCE8u;
    // 0x27fcec: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CAD0u, 0x27FCE8u, 0x27FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCF0u;
label_27fcf0:
    // 0x27fcf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27fcf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fcf4:
    // 0x27fcf4: 0x16400017  bnez        $s2, . + 4 + (0x17 << 2)
label_27fcf8:
    if (ctx->pc == 0x27FCF8u) {
        ctx->pc = 0x27FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCF4u;
        // 0x27fcf8: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FCFCu;
        goto label_27fcfc;
    }
    ctx->pc = 0x27FCF4u;
    {
        const bool branch_taken_0x27fcf4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCF4u;
        // 0x27fcf8: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcf4) {
            ctx->pc = 0x27FD54u;
            goto label_27fd54;
        }
    }
    ctx->pc = 0x27FCFCu;
label_27fcfc:
    // 0x27fcfc: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x27fcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_27fd00:
    // 0x27fd00: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x27fd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_27fd04:
    // 0x27fd04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27fd04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fd08:
    // 0x27fd08: 0xc0a5648  jal         func_295920
label_27fd0c:
    if (ctx->pc == 0x27FD0Cu) {
        ctx->pc = 0x27FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD08u;
        // 0x27fd0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD10u;
        goto label_27fd10;
    }
    ctx->pc = 0x27FD08u;
    SET_GPR_U32(ctx, 31, 0x27FD10u);
    ctx->pc = 0x27FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD08u;
    // 0x27fd0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x27FD08u, 0x27FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD10u;
label_27fd10:
    // 0x27fd10: 0x1000007e  b           . + 4 + (0x7E << 2)
label_27fd14:
    if (ctx->pc == 0x27FD14u) {
        ctx->pc = 0x27FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD10u;
        // 0x27fd14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD18u;
        goto label_27fd18;
    }
    ctx->pc = 0x27FD10u;
    {
        const bool branch_taken_0x27fd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD10u;
        // 0x27fd14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd10) {
            ctx->pc = 0x27FF0Cu;
            goto label_27ff0c;
        }
    }
    ctx->pc = 0x27FD18u;
label_27fd18:
    // 0x27fd18: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x27fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_27fd1c:
    // 0x27fd1c: 0x10000008  b           . + 4 + (0x8 << 2)
label_27fd20:
    if (ctx->pc == 0x27FD20u) {
        ctx->pc = 0x27FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD1Cu;
        // 0x27fd20: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD24u;
        goto label_27fd24;
    }
    ctx->pc = 0x27FD1Cu;
    {
        const bool branch_taken_0x27fd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD1Cu;
        // 0x27fd20: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd1c) {
            ctx->pc = 0x27FD40u;
            goto label_27fd40;
        }
    }
    ctx->pc = 0x27FD24u;
label_27fd24:
    // 0x27fd24: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x27fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_27fd28:
    // 0x27fd28: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x27fd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_27fd2c:
    // 0x27fd2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_27fd30:
    if (ctx->pc == 0x27FD30u) {
        ctx->pc = 0x27FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD2Cu;
        // 0x27fd30: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD34u;
        goto label_27fd34;
    }
    ctx->pc = 0x27FD2Cu;
    {
        const bool branch_taken_0x27fd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD2Cu;
        // 0x27fd30: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd2c) {
            ctx->pc = 0x27FD40u;
            goto label_27fd40;
        }
    }
    ctx->pc = 0x27FD34u;
label_27fd34:
    // 0x27fd34: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x27fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_27fd38:
    // 0x27fd38: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x27fd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_27fd3c:
    // 0x27fd3c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x27fd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_27fd40:
    // 0x27fd40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27fd40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fd44:
    // 0x27fd44: 0xc0a5648  jal         func_295920
label_27fd48:
    if (ctx->pc == 0x27FD48u) {
        ctx->pc = 0x27FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD44u;
        // 0x27fd48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD4Cu;
        goto label_27fd4c;
    }
    ctx->pc = 0x27FD44u;
    SET_GPR_U32(ctx, 31, 0x27FD4Cu);
    ctx->pc = 0x27FD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD44u;
    // 0x27fd48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x27FD44u, 0x27FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD4Cu;
label_27fd4c:
    // 0x27fd4c: 0x1000006a  b           . + 4 + (0x6A << 2)
label_27fd50:
    if (ctx->pc == 0x27FD50u) {
        ctx->pc = 0x27FD54u;
        goto label_27fd54;
    }
    ctx->pc = 0x27FD4Cu;
    {
        const bool branch_taken_0x27fd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fd4c) {
            ctx->pc = 0x27FEF8u;
            goto label_27fef8;
        }
    }
    ctx->pc = 0x27FD54u;
label_27fd54:
    // 0x27fd54: 0xc0a56b6  jal         func_295AD8
label_27fd58:
    if (ctx->pc == 0x27FD58u) {
        ctx->pc = 0x27FD5Cu;
        goto label_27fd5c;
    }
    ctx->pc = 0x27FD54u;
    SET_GPR_U32(ctx, 31, 0x27FD5Cu);
    ctx->pc = 0x295AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AD8u, 0x27FD54u, 0x27FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD5Cu;
label_27fd5c:
    // 0x27fd5c: 0x10000021  b           . + 4 + (0x21 << 2)
label_27fd60:
    if (ctx->pc == 0x27FD60u) {
        ctx->pc = 0x27FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD5Cu;
        // 0x27fd60: 0x2334023  subu        $t0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD64u;
        goto label_27fd64;
    }
    ctx->pc = 0x27FD5Cu;
    {
        const bool branch_taken_0x27fd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD5Cu;
        // 0x27fd60: 0x2334023  subu        $t0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd5c) {
            ctx->pc = 0x27FDE4u;
            goto label_27fde4;
        }
    }
    ctx->pc = 0x27FD64u;
label_27fd64:
    // 0x27fd64: 0x0  nop
    ctx->pc = 0x27fd64u;
    // NOP
label_27fd68:
    // 0x27fd68: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x27fd68u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_27fd6c:
    // 0x27fd6c: 0x6803c  dsll32      $s0, $a2, 0
    ctx->pc = 0x27fd6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 0));
label_27fd70:
    // 0x27fd70: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x27fd70u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_27fd74:
    // 0x27fd74: 0x2331823  subu        $v1, $s1, $s3
    ctx->pc = 0x27fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_27fd78:
    // 0x27fd78: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x27fd78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_27fd7c:
    // 0x27fd7c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_27fd80:
    if (ctx->pc == 0x27FD80u) {
        ctx->pc = 0x27FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD7Cu;
        // 0x27fd80: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD84u;
        goto label_27fd84;
    }
    ctx->pc = 0x27FD7Cu;
    {
        const bool branch_taken_0x27fd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD7Cu;
        // 0x27fd80: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd7c) {
            ctx->pc = 0x27FDD4u;
            goto label_27fdd4;
        }
    }
    ctx->pc = 0x27FD84u;
label_27fd84:
    // 0x27fd84: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x27fd84u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_27fd88:
    // 0x27fd88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27fd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27fd8c:
    // 0x27fd8c: 0xc0a32e0  jal         func_28CB80
label_27fd90:
    if (ctx->pc == 0x27FD90u) {
        ctx->pc = 0x27FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD8Cu;
        // 0x27fd90: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD94u;
        goto label_27fd94;
    }
    ctx->pc = 0x27FD8Cu;
    SET_GPR_U32(ctx, 31, 0x27FD94u);
    ctx->pc = 0x27FD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD8Cu;
    // 0x27fd90: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x27FD8Cu, 0x27FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD94u;
label_27fd94:
    // 0x27fd94: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
label_27fd98:
    if (ctx->pc == 0x27FD98u) {
        ctx->pc = 0x27FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD94u;
        // 0x27fd98: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD9Cu;
        goto label_27fd9c;
    }
    ctx->pc = 0x27FD94u;
    {
        const bool branch_taken_0x27fd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD94u;
        // 0x27fd98: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd94) {
            ctx->pc = 0x27FD18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fd18;
        }
    }
    ctx->pc = 0x27FD9Cu;
label_27fd9c:
    // 0x27fd9c: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
label_27fda0:
    if (ctx->pc == 0x27FDA0u) {
        ctx->pc = 0x27FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD9Cu;
        // 0x27fda0: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FDA4u;
        goto label_27fda4;
    }
    ctx->pc = 0x27FD9Cu;
    {
        const bool branch_taken_0x27fd9c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x27FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD9Cu;
        // 0x27fda0: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd9c) {
            ctx->pc = 0x27FDD4u;
            goto label_27fdd4;
        }
    }
    ctx->pc = 0x27FDA4u;
label_27fda4:
    // 0x27fda4: 0x0  nop
    ctx->pc = 0x27fda4u;
    // NOP
label_27fda8:
    // 0x27fda8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x27fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_27fdac:
    // 0x27fdac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27fdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27fdb0:
    // 0x27fdb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27fdb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fdb4:
    // 0x27fdb4: 0xc0a1468  jal         func_2851A0
label_27fdb8:
    if (ctx->pc == 0x27FDB8u) {
        ctx->pc = 0x27FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDB4u;
        // 0x27fdb8: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FDBCu;
        goto label_27fdbc;
    }
    ctx->pc = 0x27FDB4u;
    SET_GPR_U32(ctx, 31, 0x27FDBCu);
    ctx->pc = 0x27FDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FDB4u;
    // 0x27fdb8: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851A0u, 0x27FDB4u, 0x27FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDBCu;
label_27fdbc:
    // 0x27fdbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27fdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fdc0:
    // 0x27fdc0: 0x1880ffdc  blez        $a0, . + 4 + (-0x24 << 2)
label_27fdc4:
    if (ctx->pc == 0x27FDC4u) {
        ctx->pc = 0x27FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDC0u;
        // 0x27fdc4: 0x2048023  subu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FDC8u;
        goto label_27fdc8;
    }
    ctx->pc = 0x27FDC0u;
    {
        const bool branch_taken_0x27fdc0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x27FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDC0u;
        // 0x27fdc4: 0x2048023  subu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdc0) {
            ctx->pc = 0x27FD34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fd34;
        }
    }
    ctx->pc = 0x27FDC8u;
label_27fdc8:
    // 0x27fdc8: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
label_27fdcc:
    if (ctx->pc == 0x27FDCCu) {
        ctx->pc = 0x27FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDC8u;
        // 0x27fdcc: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FDD0u;
        goto label_27fdd0;
    }
    ctx->pc = 0x27FDC8u;
    {
        const bool branch_taken_0x27fdc8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x27FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDC8u;
        // 0x27fdcc: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdc8) {
            ctx->pc = 0x27FDA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fda8;
        }
    }
    ctx->pc = 0x27FDD0u;
label_27fdd0:
    // 0x27fdd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x27fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27fdd4:
    // 0x27fdd4: 0x1a800041  blez        $s4, . + 4 + (0x41 << 2)
label_27fdd8:
    if (ctx->pc == 0x27FDD8u) {
        ctx->pc = 0x27FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDD4u;
        // 0x27fdd8: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FDDCu;
        goto label_27fddc;
    }
    ctx->pc = 0x27FDD4u;
    {
        const bool branch_taken_0x27fdd4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x27FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDD4u;
        // 0x27fdd8: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdd4) {
            ctx->pc = 0x27FEDCu;
            goto label_27fedc;
        }
    }
    ctx->pc = 0x27FDDCu;
label_27fddc:
    // 0x27fddc: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x27fddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27fde0:
    // 0x27fde0: 0x2334023  subu        $t0, $s1, $s3
    ctx->pc = 0x27fde0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_27fde4:
    // 0x27fde4: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x27fde4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_27fde8:
    // 0x27fde8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_27fdec:
    if (ctx->pc == 0x27FDECu) {
        ctx->pc = 0x27FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDE8u;
        // 0x27fdec: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FDF0u;
        goto label_27fdf0;
    }
    ctx->pc = 0x27FDE8u;
    {
        const bool branch_taken_0x27fde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fde8) {
            ctx->pc = 0x27FDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FDE8u;
            // 0x27fdec: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FE3Cu;
            goto label_27fe3c;
        }
    }
    ctx->pc = 0x27FDF0u;
label_27fdf0:
    // 0x27fdf0: 0x2088023  subu        $s0, $s0, $t0
    ctx->pc = 0x27fdf0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_27fdf4:
    // 0x27fdf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27fdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27fdf8:
    // 0x27fdf8: 0xc0a32e0  jal         func_28CB80
label_27fdfc:
    if (ctx->pc == 0x27FDFCu) {
        ctx->pc = 0x27FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDF8u;
        // 0x27fdfc: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE00u;
        goto label_27fe00;
    }
    ctx->pc = 0x27FDF8u;
    SET_GPR_U32(ctx, 31, 0x27FE00u);
    ctx->pc = 0x27FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FDF8u;
    // 0x27fdfc: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x27FDF8u, 0x27FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE00u;
label_27fe00:
    // 0x27fe00: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
label_27fe04:
    if (ctx->pc == 0x27FE04u) {
        ctx->pc = 0x27FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE00u;
        // 0x27fe04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE08u;
        goto label_27fe08;
    }
    ctx->pc = 0x27FE00u;
    {
        const bool branch_taken_0x27fe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE00u;
        // 0x27fe04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe00) {
            ctx->pc = 0x27FD24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fd24;
        }
    }
    ctx->pc = 0x27FE08u;
label_27fe08:
    // 0x27fe08: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x27fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_27fe0c:
    // 0x27fe0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27fe0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27fe10:
    // 0x27fe10: 0xc0a1468  jal         func_2851A0
label_27fe14:
    if (ctx->pc == 0x27FE14u) {
        ctx->pc = 0x27FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE10u;
        // 0x27fe14: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE18u;
        goto label_27fe18;
    }
    ctx->pc = 0x27FE10u;
    SET_GPR_U32(ctx, 31, 0x27FE18u);
    ctx->pc = 0x27FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE10u;
    // 0x27fe14: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851A0u, 0x27FE10u, 0x27FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE18u;
label_27fe18:
    // 0x27fe18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27fe18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fe1c:
    // 0x27fe1c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_27fe20:
    if (ctx->pc == 0x27FE20u) {
        ctx->pc = 0x27FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE1Cu;
        // 0x27fe20: 0x4102a  slt         $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE24u;
        goto label_27fe24;
    }
    ctx->pc = 0x27FE1Cu;
    {
        const bool branch_taken_0x27fe1c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x27FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE1Cu;
        // 0x27fe20: 0x4102a  slt         $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe1c) {
            ctx->pc = 0x27FE2Cu;
            goto label_27fe2c;
        }
    }
    ctx->pc = 0x27FE24u;
label_27fe24:
    // 0x27fe24: 0x5233ffc4  beql        $s1, $s3, . + 4 + (-0x3C << 2)
label_27fe28:
    if (ctx->pc == 0x27FE28u) {
        ctx->pc = 0x27FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE24u;
        // 0x27fe28: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE2Cu;
        goto label_27fe2c;
    }
    ctx->pc = 0x27FE24u;
    {
        const bool branch_taken_0x27fe24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x27fe24) {
            ctx->pc = 0x27FE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FE24u;
            // 0x27fe28: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FD38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fd38;
        }
    }
    ctx->pc = 0x27FE2Cu;
label_27fe2c:
    // 0x27fe2c: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x27fe2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27fe30:
    // 0x27fe30: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x27fe30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_27fe34:
    // 0x27fe34: 0x2334023  subu        $t0, $s1, $s3
    ctx->pc = 0x27fe34u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_27fe38:
    // 0x27fe38: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x27fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_27fe3c:
    // 0x27fe3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27fe3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27fe40:
    // 0x27fe40: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x27fe40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_27fe44:
    // 0x27fe44: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x27fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_27fe48:
    // 0x27fe48: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x27fe48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27fe4c:
    // 0x27fe4c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_27fe50:
    // 0x27fe50: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x27fe50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_27fe54:
    // 0x27fe54: 0xc0a0554  jal         func_281550
label_27fe58:
    if (ctx->pc == 0x27FE58u) {
        ctx->pc = 0x27FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE54u;
        // 0x27fe58: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE5Cu;
        goto label_27fe5c;
    }
    ctx->pc = 0x27FE54u;
    SET_GPR_U32(ctx, 31, 0x27FE5Cu);
    ctx->pc = 0x27FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE54u;
    // 0x27fe58: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281550u, 0x27FE54u, 0x27FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE5Cu;
label_27fe5c:
    // 0x27fe5c: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x27fe5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_27fe60:
    // 0x27fe60: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_27fe64:
    if (ctx->pc == 0x27FE64u) {
        ctx->pc = 0x27FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE60u;
        // 0x27fe64: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE68u;
        goto label_27fe68;
    }
    ctx->pc = 0x27FE60u;
    {
        const bool branch_taken_0x27fe60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE60u;
        // 0x27fe64: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe60) {
            ctx->pc = 0x27FE90u;
            goto label_27fe90;
        }
    }
    ctx->pc = 0x27FE68u;
label_27fe68:
    // 0x27fe68: 0xc0a56cc  jal         func_295B30
label_27fe6c:
    if (ctx->pc == 0x27FE6Cu) {
        ctx->pc = 0x27FE70u;
        goto label_27fe70;
    }
    ctx->pc = 0x27FE68u;
    SET_GPR_U32(ctx, 31, 0x27FE70u);
    ctx->pc = 0x295B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B30u, 0x27FE68u, 0x27FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE70u;
label_27fe70:
    // 0x27fe70: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27fe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_27fe74:
    // 0x27fe74: 0x24030089  addiu       $v1, $zero, 0x89
    ctx->pc = 0x27fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
label_27fe78:
    // 0x27fe78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27fe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_27fe7c:
    // 0x27fe7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27fe7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_27fe80:
    // 0x27fe80: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_27fe84:
    if (ctx->pc == 0x27FE84u) {
        ctx->pc = 0x27FE88u;
        goto label_27fe88;
    }
    ctx->pc = 0x27FE80u;
    {
        const bool branch_taken_0x27fe80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fe80) {
            ctx->pc = 0x27FEF8u;
            goto label_27fef8;
        }
    }
    ctx->pc = 0x27FE88u;
label_27fe88:
    // 0x27fe88: 0xc0a56c0  jal         func_295B00
label_27fe8c:
    if (ctx->pc == 0x27FE8Cu) {
        ctx->pc = 0x27FE90u;
        goto label_27fe90;
    }
    ctx->pc = 0x27FE88u;
    SET_GPR_U32(ctx, 31, 0x27FE90u);
    ctx->pc = 0x295B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B00u, 0x27FE88u, 0x27FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE90u;
label_27fe90:
    // 0x27fe90: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x27fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27fe94:
    // 0x27fe94: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x27fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_27fe98:
    // 0x27fe98: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x27fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_27fe9c:
    // 0x27fe9c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x27fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27fea0:
    // 0x27fea0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27fea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27fea4:
    // 0x27fea4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_27fea8:
    if (ctx->pc == 0x27FEA8u) {
        ctx->pc = 0x27FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEA4u;
        // 0x27fea8: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEACu;
        goto label_27feac;
    }
    ctx->pc = 0x27FEA4u;
    {
        const bool branch_taken_0x27fea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEA4u;
        // 0x27fea8: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fea4) {
            ctx->pc = 0x27FEB4u;
            goto label_27feb4;
        }
    }
    ctx->pc = 0x27FEACu;
label_27feac:
    // 0x27feac: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
label_27feb0:
    if (ctx->pc == 0x27FEB0u) {
        ctx->pc = 0x27FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEACu;
        // 0x27feb0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEB4u;
        goto label_27feb4;
    }
    ctx->pc = 0x27FEACu;
    {
        const bool branch_taken_0x27feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEACu;
        // 0x27feb0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27feac) {
            ctx->pc = 0x27FDDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fddc;
        }
    }
    ctx->pc = 0x27FEB4u;
label_27feb4:
    // 0x27feb4: 0x1280ffac  beqz        $s4, . + 4 + (-0x54 << 2)
label_27feb8:
    if (ctx->pc == 0x27FEB8u) {
        ctx->pc = 0x27FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEB4u;
        // 0x27feb8: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEBCu;
        goto label_27febc;
    }
    ctx->pc = 0x27FEB4u;
    {
        const bool branch_taken_0x27feb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEB4u;
        // 0x27feb8: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27feb4) {
            ctx->pc = 0x27FD68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fd68;
        }
    }
    ctx->pc = 0x27FEBCu;
label_27febc:
    // 0x27febc: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_27fec0:
    if (ctx->pc == 0x27FEC0u) {
        ctx->pc = 0x27FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEBCu;
        // 0x27fec0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEC4u;
        goto label_27fec4;
    }
    ctx->pc = 0x27FEBCu;
    {
        const bool branch_taken_0x27febc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEBCu;
        // 0x27fec0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27febc) {
            ctx->pc = 0x27FD6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fd6c;
        }
    }
    ctx->pc = 0x27FEC4u;
label_27fec4:
    // 0x27fec4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_27fec8:
    // 0x27fec8: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
label_27fecc:
    if (ctx->pc == 0x27FECCu) {
        ctx->pc = 0x27FED0u;
        goto label_27fed0;
    }
    ctx->pc = 0x27FEC8u;
    {
        const bool branch_taken_0x27fec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fec8) {
            ctx->pc = 0x27FD6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fd6c;
        }
    }
    ctx->pc = 0x27FED0u;
label_27fed0:
    // 0x27fed0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x27fed0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_27fed4:
    // 0x27fed4: 0x1e80ffc2  bgtz        $s4, . + 4 + (-0x3E << 2)
label_27fed8:
    if (ctx->pc == 0x27FED8u) {
        ctx->pc = 0x27FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FED4u;
        // 0x27fed8: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEDCu;
        goto label_27fedc;
    }
    ctx->pc = 0x27FED4u;
    {
        const bool branch_taken_0x27fed4 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x27FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FED4u;
        // 0x27fed8: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fed4) {
            ctx->pc = 0x27FDE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fde0;
        }
    }
    ctx->pc = 0x27FEDCu;
label_27fedc:
    // 0x27fedc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x27fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_27fee0:
    // 0x27fee0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27fee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27fee4:
    // 0x27fee4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27fee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27fee8:
    // 0x27fee8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x27fee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27feec:
    // 0x27feec: 0x2e0f809  jalr        $s7
label_27fef0:
    if (ctx->pc == 0x27FEF0u) {
        ctx->pc = 0x27FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEECu;
        // 0x27fef0: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEF4u;
        goto label_27fef4;
    }
    ctx->pc = 0x27FEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x27FEF4u);
        ctx->pc = 0x27FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEECu;
        // 0x27fef0: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FEECu, 0x27FEF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27FEF4u;
label_27fef4:
    // 0x27fef4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x27fef4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fef8:
    // 0x27fef8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_27fefc:
    if (ctx->pc == 0x27FEFCu) {
        ctx->pc = 0x27FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEF8u;
        // 0x27fefc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF00u;
        goto label_27ff00;
    }
    ctx->pc = 0x27FEF8u;
    {
        const bool branch_taken_0x27fef8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEF8u;
        // 0x27fefc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fef8) {
            ctx->pc = 0x27FF0Cu;
            goto label_27ff0c;
        }
    }
    ctx->pc = 0x27FF00u;
label_27ff00:
    // 0x27ff00: 0xc0a32ca  jal         func_28CB28
label_27ff04:
    if (ctx->pc == 0x27FF04u) {
        ctx->pc = 0x27FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF00u;
        // 0x27ff04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF08u;
        goto label_27ff08;
    }
    ctx->pc = 0x27FF00u;
    SET_GPR_U32(ctx, 31, 0x27FF08u);
    ctx->pc = 0x27FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF00u;
    // 0x27ff04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB28u, 0x27FF00u, 0x27FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF08u;
label_27ff08:
    // 0x27ff08: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x27ff08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27ff0c:
    // 0x27ff0c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x27ff0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_27ff10:
    // 0x27ff10: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x27ff10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_27ff14:
    // 0x27ff14: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x27ff14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_27ff18:
    // 0x27ff18: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x27ff18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_27ff1c:
    // 0x27ff1c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x27ff1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_27ff20:
    // 0x27ff20: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x27ff20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_27ff24:
    // 0x27ff24: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x27ff24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_27ff28:
    // 0x27ff28: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x27ff28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_27ff2c:
    // 0x27ff2c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x27ff2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_27ff30:
    // 0x27ff30: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x27ff30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27ff34:
    // 0x27ff34: 0x3e00008  jr          $ra
label_27ff38:
    if (ctx->pc == 0x27FF38u) {
        ctx->pc = 0x27FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF34u;
        // 0x27ff38: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF3Cu;
        goto label_27ff3c;
    }
    ctx->pc = 0x27FF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF34u;
        // 0x27ff38: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FF3Cu;
label_27ff3c:
    // 0x27ff3c: 0x0  nop
    ctx->pc = 0x27ff3cu;
    // NOP
    if (ctx->pc == 0x27ff3cu) { ctx->pc = 0x27ff40u; }
}
