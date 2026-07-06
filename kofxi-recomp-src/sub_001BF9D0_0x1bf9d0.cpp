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

// Function: sub_001BF9D0
// Address: 0x1bf9d0 - 0x1bfee8
void sub_001BF9D0_0x1bf9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF9D0_0x1bf9d0");
#endif

    switch (ctx->pc) {
        case 0x1bf9d0u: goto label_1bf9d0;
        case 0x1bf9d4u: goto label_1bf9d4;
        case 0x1bf9d8u: goto label_1bf9d8;
        case 0x1bf9dcu: goto label_1bf9dc;
        case 0x1bf9e0u: goto label_1bf9e0;
        case 0x1bf9e4u: goto label_1bf9e4;
        case 0x1bf9e8u: goto label_1bf9e8;
        case 0x1bf9ecu: goto label_1bf9ec;
        case 0x1bf9f0u: goto label_1bf9f0;
        case 0x1bf9f4u: goto label_1bf9f4;
        case 0x1bf9f8u: goto label_1bf9f8;
        case 0x1bf9fcu: goto label_1bf9fc;
        case 0x1bfa00u: goto label_1bfa00;
        case 0x1bfa04u: goto label_1bfa04;
        case 0x1bfa08u: goto label_1bfa08;
        case 0x1bfa0cu: goto label_1bfa0c;
        case 0x1bfa10u: goto label_1bfa10;
        case 0x1bfa14u: goto label_1bfa14;
        case 0x1bfa18u: goto label_1bfa18;
        case 0x1bfa1cu: goto label_1bfa1c;
        case 0x1bfa20u: goto label_1bfa20;
        case 0x1bfa24u: goto label_1bfa24;
        case 0x1bfa28u: goto label_1bfa28;
        case 0x1bfa2cu: goto label_1bfa2c;
        case 0x1bfa30u: goto label_1bfa30;
        case 0x1bfa34u: goto label_1bfa34;
        case 0x1bfa38u: goto label_1bfa38;
        case 0x1bfa3cu: goto label_1bfa3c;
        case 0x1bfa40u: goto label_1bfa40;
        case 0x1bfa44u: goto label_1bfa44;
        case 0x1bfa48u: goto label_1bfa48;
        case 0x1bfa4cu: goto label_1bfa4c;
        case 0x1bfa50u: goto label_1bfa50;
        case 0x1bfa54u: goto label_1bfa54;
        case 0x1bfa58u: goto label_1bfa58;
        case 0x1bfa5cu: goto label_1bfa5c;
        case 0x1bfa60u: goto label_1bfa60;
        case 0x1bfa64u: goto label_1bfa64;
        case 0x1bfa68u: goto label_1bfa68;
        case 0x1bfa6cu: goto label_1bfa6c;
        case 0x1bfa70u: goto label_1bfa70;
        case 0x1bfa74u: goto label_1bfa74;
        case 0x1bfa78u: goto label_1bfa78;
        case 0x1bfa7cu: goto label_1bfa7c;
        case 0x1bfa80u: goto label_1bfa80;
        case 0x1bfa84u: goto label_1bfa84;
        case 0x1bfa88u: goto label_1bfa88;
        case 0x1bfa8cu: goto label_1bfa8c;
        case 0x1bfa90u: goto label_1bfa90;
        case 0x1bfa94u: goto label_1bfa94;
        case 0x1bfa98u: goto label_1bfa98;
        case 0x1bfa9cu: goto label_1bfa9c;
        case 0x1bfaa0u: goto label_1bfaa0;
        case 0x1bfaa4u: goto label_1bfaa4;
        case 0x1bfaa8u: goto label_1bfaa8;
        case 0x1bfaacu: goto label_1bfaac;
        case 0x1bfab0u: goto label_1bfab0;
        case 0x1bfab4u: goto label_1bfab4;
        case 0x1bfab8u: goto label_1bfab8;
        case 0x1bfabcu: goto label_1bfabc;
        case 0x1bfac0u: goto label_1bfac0;
        case 0x1bfac4u: goto label_1bfac4;
        case 0x1bfac8u: goto label_1bfac8;
        case 0x1bfaccu: goto label_1bfacc;
        case 0x1bfad0u: goto label_1bfad0;
        case 0x1bfad4u: goto label_1bfad4;
        case 0x1bfad8u: goto label_1bfad8;
        case 0x1bfadcu: goto label_1bfadc;
        case 0x1bfae0u: goto label_1bfae0;
        case 0x1bfae4u: goto label_1bfae4;
        case 0x1bfae8u: goto label_1bfae8;
        case 0x1bfaecu: goto label_1bfaec;
        case 0x1bfaf0u: goto label_1bfaf0;
        case 0x1bfaf4u: goto label_1bfaf4;
        case 0x1bfaf8u: goto label_1bfaf8;
        case 0x1bfafcu: goto label_1bfafc;
        case 0x1bfb00u: goto label_1bfb00;
        case 0x1bfb04u: goto label_1bfb04;
        case 0x1bfb08u: goto label_1bfb08;
        case 0x1bfb0cu: goto label_1bfb0c;
        case 0x1bfb10u: goto label_1bfb10;
        case 0x1bfb14u: goto label_1bfb14;
        case 0x1bfb18u: goto label_1bfb18;
        case 0x1bfb1cu: goto label_1bfb1c;
        case 0x1bfb20u: goto label_1bfb20;
        case 0x1bfb24u: goto label_1bfb24;
        case 0x1bfb28u: goto label_1bfb28;
        case 0x1bfb2cu: goto label_1bfb2c;
        case 0x1bfb30u: goto label_1bfb30;
        case 0x1bfb34u: goto label_1bfb34;
        case 0x1bfb38u: goto label_1bfb38;
        case 0x1bfb3cu: goto label_1bfb3c;
        case 0x1bfb40u: goto label_1bfb40;
        case 0x1bfb44u: goto label_1bfb44;
        case 0x1bfb48u: goto label_1bfb48;
        case 0x1bfb4cu: goto label_1bfb4c;
        case 0x1bfb50u: goto label_1bfb50;
        case 0x1bfb54u: goto label_1bfb54;
        case 0x1bfb58u: goto label_1bfb58;
        case 0x1bfb5cu: goto label_1bfb5c;
        case 0x1bfb60u: goto label_1bfb60;
        case 0x1bfb64u: goto label_1bfb64;
        case 0x1bfb68u: goto label_1bfb68;
        case 0x1bfb6cu: goto label_1bfb6c;
        case 0x1bfb70u: goto label_1bfb70;
        case 0x1bfb74u: goto label_1bfb74;
        case 0x1bfb78u: goto label_1bfb78;
        case 0x1bfb7cu: goto label_1bfb7c;
        case 0x1bfb80u: goto label_1bfb80;
        case 0x1bfb84u: goto label_1bfb84;
        case 0x1bfb88u: goto label_1bfb88;
        case 0x1bfb8cu: goto label_1bfb8c;
        case 0x1bfb90u: goto label_1bfb90;
        case 0x1bfb94u: goto label_1bfb94;
        case 0x1bfb98u: goto label_1bfb98;
        case 0x1bfb9cu: goto label_1bfb9c;
        case 0x1bfba0u: goto label_1bfba0;
        case 0x1bfba4u: goto label_1bfba4;
        case 0x1bfba8u: goto label_1bfba8;
        case 0x1bfbacu: goto label_1bfbac;
        case 0x1bfbb0u: goto label_1bfbb0;
        case 0x1bfbb4u: goto label_1bfbb4;
        case 0x1bfbb8u: goto label_1bfbb8;
        case 0x1bfbbcu: goto label_1bfbbc;
        case 0x1bfbc0u: goto label_1bfbc0;
        case 0x1bfbc4u: goto label_1bfbc4;
        case 0x1bfbc8u: goto label_1bfbc8;
        case 0x1bfbccu: goto label_1bfbcc;
        case 0x1bfbd0u: goto label_1bfbd0;
        case 0x1bfbd4u: goto label_1bfbd4;
        case 0x1bfbd8u: goto label_1bfbd8;
        case 0x1bfbdcu: goto label_1bfbdc;
        case 0x1bfbe0u: goto label_1bfbe0;
        case 0x1bfbe4u: goto label_1bfbe4;
        case 0x1bfbe8u: goto label_1bfbe8;
        case 0x1bfbecu: goto label_1bfbec;
        case 0x1bfbf0u: goto label_1bfbf0;
        case 0x1bfbf4u: goto label_1bfbf4;
        case 0x1bfbf8u: goto label_1bfbf8;
        case 0x1bfbfcu: goto label_1bfbfc;
        case 0x1bfc00u: goto label_1bfc00;
        case 0x1bfc04u: goto label_1bfc04;
        case 0x1bfc08u: goto label_1bfc08;
        case 0x1bfc0cu: goto label_1bfc0c;
        case 0x1bfc10u: goto label_1bfc10;
        case 0x1bfc14u: goto label_1bfc14;
        case 0x1bfc18u: goto label_1bfc18;
        case 0x1bfc1cu: goto label_1bfc1c;
        case 0x1bfc20u: goto label_1bfc20;
        case 0x1bfc24u: goto label_1bfc24;
        case 0x1bfc28u: goto label_1bfc28;
        case 0x1bfc2cu: goto label_1bfc2c;
        case 0x1bfc30u: goto label_1bfc30;
        case 0x1bfc34u: goto label_1bfc34;
        case 0x1bfc38u: goto label_1bfc38;
        case 0x1bfc3cu: goto label_1bfc3c;
        case 0x1bfc40u: goto label_1bfc40;
        case 0x1bfc44u: goto label_1bfc44;
        case 0x1bfc48u: goto label_1bfc48;
        case 0x1bfc4cu: goto label_1bfc4c;
        case 0x1bfc50u: goto label_1bfc50;
        case 0x1bfc54u: goto label_1bfc54;
        case 0x1bfc58u: goto label_1bfc58;
        case 0x1bfc5cu: goto label_1bfc5c;
        case 0x1bfc60u: goto label_1bfc60;
        case 0x1bfc64u: goto label_1bfc64;
        case 0x1bfc68u: goto label_1bfc68;
        case 0x1bfc6cu: goto label_1bfc6c;
        case 0x1bfc70u: goto label_1bfc70;
        case 0x1bfc74u: goto label_1bfc74;
        case 0x1bfc78u: goto label_1bfc78;
        case 0x1bfc7cu: goto label_1bfc7c;
        case 0x1bfc80u: goto label_1bfc80;
        case 0x1bfc84u: goto label_1bfc84;
        case 0x1bfc88u: goto label_1bfc88;
        case 0x1bfc8cu: goto label_1bfc8c;
        case 0x1bfc90u: goto label_1bfc90;
        case 0x1bfc94u: goto label_1bfc94;
        case 0x1bfc98u: goto label_1bfc98;
        case 0x1bfc9cu: goto label_1bfc9c;
        case 0x1bfca0u: goto label_1bfca0;
        case 0x1bfca4u: goto label_1bfca4;
        case 0x1bfca8u: goto label_1bfca8;
        case 0x1bfcacu: goto label_1bfcac;
        case 0x1bfcb0u: goto label_1bfcb0;
        case 0x1bfcb4u: goto label_1bfcb4;
        case 0x1bfcb8u: goto label_1bfcb8;
        case 0x1bfcbcu: goto label_1bfcbc;
        case 0x1bfcc0u: goto label_1bfcc0;
        case 0x1bfcc4u: goto label_1bfcc4;
        case 0x1bfcc8u: goto label_1bfcc8;
        case 0x1bfcccu: goto label_1bfccc;
        case 0x1bfcd0u: goto label_1bfcd0;
        case 0x1bfcd4u: goto label_1bfcd4;
        case 0x1bfcd8u: goto label_1bfcd8;
        case 0x1bfcdcu: goto label_1bfcdc;
        case 0x1bfce0u: goto label_1bfce0;
        case 0x1bfce4u: goto label_1bfce4;
        case 0x1bfce8u: goto label_1bfce8;
        case 0x1bfcecu: goto label_1bfcec;
        case 0x1bfcf0u: goto label_1bfcf0;
        case 0x1bfcf4u: goto label_1bfcf4;
        case 0x1bfcf8u: goto label_1bfcf8;
        case 0x1bfcfcu: goto label_1bfcfc;
        case 0x1bfd00u: goto label_1bfd00;
        case 0x1bfd04u: goto label_1bfd04;
        case 0x1bfd08u: goto label_1bfd08;
        case 0x1bfd0cu: goto label_1bfd0c;
        case 0x1bfd10u: goto label_1bfd10;
        case 0x1bfd14u: goto label_1bfd14;
        case 0x1bfd18u: goto label_1bfd18;
        case 0x1bfd1cu: goto label_1bfd1c;
        case 0x1bfd20u: goto label_1bfd20;
        case 0x1bfd24u: goto label_1bfd24;
        case 0x1bfd28u: goto label_1bfd28;
        case 0x1bfd2cu: goto label_1bfd2c;
        case 0x1bfd30u: goto label_1bfd30;
        case 0x1bfd34u: goto label_1bfd34;
        case 0x1bfd38u: goto label_1bfd38;
        case 0x1bfd3cu: goto label_1bfd3c;
        case 0x1bfd40u: goto label_1bfd40;
        case 0x1bfd44u: goto label_1bfd44;
        case 0x1bfd48u: goto label_1bfd48;
        case 0x1bfd4cu: goto label_1bfd4c;
        case 0x1bfd50u: goto label_1bfd50;
        case 0x1bfd54u: goto label_1bfd54;
        case 0x1bfd58u: goto label_1bfd58;
        case 0x1bfd5cu: goto label_1bfd5c;
        case 0x1bfd60u: goto label_1bfd60;
        case 0x1bfd64u: goto label_1bfd64;
        case 0x1bfd68u: goto label_1bfd68;
        case 0x1bfd6cu: goto label_1bfd6c;
        case 0x1bfd70u: goto label_1bfd70;
        case 0x1bfd74u: goto label_1bfd74;
        case 0x1bfd78u: goto label_1bfd78;
        case 0x1bfd7cu: goto label_1bfd7c;
        case 0x1bfd80u: goto label_1bfd80;
        case 0x1bfd84u: goto label_1bfd84;
        case 0x1bfd88u: goto label_1bfd88;
        case 0x1bfd8cu: goto label_1bfd8c;
        case 0x1bfd90u: goto label_1bfd90;
        case 0x1bfd94u: goto label_1bfd94;
        case 0x1bfd98u: goto label_1bfd98;
        case 0x1bfd9cu: goto label_1bfd9c;
        case 0x1bfda0u: goto label_1bfda0;
        case 0x1bfda4u: goto label_1bfda4;
        case 0x1bfda8u: goto label_1bfda8;
        case 0x1bfdacu: goto label_1bfdac;
        case 0x1bfdb0u: goto label_1bfdb0;
        case 0x1bfdb4u: goto label_1bfdb4;
        case 0x1bfdb8u: goto label_1bfdb8;
        case 0x1bfdbcu: goto label_1bfdbc;
        case 0x1bfdc0u: goto label_1bfdc0;
        case 0x1bfdc4u: goto label_1bfdc4;
        case 0x1bfdc8u: goto label_1bfdc8;
        case 0x1bfdccu: goto label_1bfdcc;
        case 0x1bfdd0u: goto label_1bfdd0;
        case 0x1bfdd4u: goto label_1bfdd4;
        case 0x1bfdd8u: goto label_1bfdd8;
        case 0x1bfddcu: goto label_1bfddc;
        case 0x1bfde0u: goto label_1bfde0;
        case 0x1bfde4u: goto label_1bfde4;
        case 0x1bfde8u: goto label_1bfde8;
        case 0x1bfdecu: goto label_1bfdec;
        case 0x1bfdf0u: goto label_1bfdf0;
        case 0x1bfdf4u: goto label_1bfdf4;
        case 0x1bfdf8u: goto label_1bfdf8;
        case 0x1bfdfcu: goto label_1bfdfc;
        case 0x1bfe00u: goto label_1bfe00;
        case 0x1bfe04u: goto label_1bfe04;
        case 0x1bfe08u: goto label_1bfe08;
        case 0x1bfe0cu: goto label_1bfe0c;
        case 0x1bfe10u: goto label_1bfe10;
        case 0x1bfe14u: goto label_1bfe14;
        case 0x1bfe18u: goto label_1bfe18;
        case 0x1bfe1cu: goto label_1bfe1c;
        case 0x1bfe20u: goto label_1bfe20;
        case 0x1bfe24u: goto label_1bfe24;
        case 0x1bfe28u: goto label_1bfe28;
        case 0x1bfe2cu: goto label_1bfe2c;
        case 0x1bfe30u: goto label_1bfe30;
        case 0x1bfe34u: goto label_1bfe34;
        case 0x1bfe38u: goto label_1bfe38;
        case 0x1bfe3cu: goto label_1bfe3c;
        case 0x1bfe40u: goto label_1bfe40;
        case 0x1bfe44u: goto label_1bfe44;
        case 0x1bfe48u: goto label_1bfe48;
        case 0x1bfe4cu: goto label_1bfe4c;
        case 0x1bfe50u: goto label_1bfe50;
        case 0x1bfe54u: goto label_1bfe54;
        case 0x1bfe58u: goto label_1bfe58;
        case 0x1bfe5cu: goto label_1bfe5c;
        case 0x1bfe60u: goto label_1bfe60;
        case 0x1bfe64u: goto label_1bfe64;
        case 0x1bfe68u: goto label_1bfe68;
        case 0x1bfe6cu: goto label_1bfe6c;
        case 0x1bfe70u: goto label_1bfe70;
        case 0x1bfe74u: goto label_1bfe74;
        case 0x1bfe78u: goto label_1bfe78;
        case 0x1bfe7cu: goto label_1bfe7c;
        case 0x1bfe80u: goto label_1bfe80;
        case 0x1bfe84u: goto label_1bfe84;
        case 0x1bfe88u: goto label_1bfe88;
        case 0x1bfe8cu: goto label_1bfe8c;
        case 0x1bfe90u: goto label_1bfe90;
        case 0x1bfe94u: goto label_1bfe94;
        case 0x1bfe98u: goto label_1bfe98;
        case 0x1bfe9cu: goto label_1bfe9c;
        case 0x1bfea0u: goto label_1bfea0;
        case 0x1bfea4u: goto label_1bfea4;
        case 0x1bfea8u: goto label_1bfea8;
        case 0x1bfeacu: goto label_1bfeac;
        case 0x1bfeb0u: goto label_1bfeb0;
        case 0x1bfeb4u: goto label_1bfeb4;
        case 0x1bfeb8u: goto label_1bfeb8;
        case 0x1bfebcu: goto label_1bfebc;
        case 0x1bfec0u: goto label_1bfec0;
        case 0x1bfec4u: goto label_1bfec4;
        case 0x1bfec8u: goto label_1bfec8;
        case 0x1bfeccu: goto label_1bfecc;
        case 0x1bfed0u: goto label_1bfed0;
        case 0x1bfed4u: goto label_1bfed4;
        case 0x1bfed8u: goto label_1bfed8;
        case 0x1bfedcu: goto label_1bfedc;
        case 0x1bfee0u: goto label_1bfee0;
        case 0x1bfee4u: goto label_1bfee4;
        default: break;
    }

    ctx->pc = 0x1bf9d0u;

label_1bf9d0:
    // 0x1bf9d0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1bf9d4:
    if (ctx->pc == 0x1BF9D4u) {
        ctx->pc = 0x1BF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9D0u;
        // 0x1bf9d4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9D8u;
        goto label_1bf9d8;
    }
    ctx->pc = 0x1BF9D0u;
    {
        const bool branch_taken_0x1bf9d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9D0u;
        // 0x1bf9d4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9d0) {
            ctx->pc = 0x1BF9E8u;
            goto label_1bf9e8;
        }
    }
    ctx->pc = 0x1BF9D8u;
label_1bf9d8:
    // 0x1bf9d8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1bf9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1bf9dc:
    // 0x1bf9dc: 0xac40c7c4  sw          $zero, -0x383C($v0)
    ctx->pc = 0x1bf9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952900), GPR_U32(ctx, 0));
label_1bf9e0:
    // 0x1bf9e0: 0x3e00008  jr          $ra
label_1bf9e4:
    if (ctx->pc == 0x1BF9E4u) {
        ctx->pc = 0x1BF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9E0u;
        // 0x1bf9e4: 0xac60c7c8  sw          $zero, -0x3838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9E8u;
        goto label_1bf9e8;
    }
    ctx->pc = 0x1BF9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9E0u;
        // 0x1bf9e4: 0xac60c7c8  sw          $zero, -0x3838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF9E8u;
label_1bf9e8:
    // 0x1bf9e8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1bf9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1bf9ec:
    // 0x1bf9ec: 0xac44c7c4  sw          $a0, -0x383C($v0)
    ctx->pc = 0x1bf9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952900), GPR_U32(ctx, 4));
label_1bf9f0:
    // 0x1bf9f0: 0x3e00008  jr          $ra
label_1bf9f4:
    if (ctx->pc == 0x1BF9F4u) {
        ctx->pc = 0x1BF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9F0u;
        // 0x1bf9f4: 0xac65c7c8  sw          $a1, -0x3838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952904), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9F8u;
        goto label_1bf9f8;
    }
    ctx->pc = 0x1BF9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9F0u;
        // 0x1bf9f4: 0xac65c7c8  sw          $a1, -0x3838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952904), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF9F8u;
label_1bf9f8:
    // 0x1bf9f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bf9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bf9fc:
    // 0x1bf9fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bfa00:
    // 0x1bfa00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bfa00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa04:
    // 0x1bfa04: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1bfa08:
    if (ctx->pc == 0x1BFA08u) {
        ctx->pc = 0x1BFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA04u;
        // 0x1bfa08: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA0Cu;
        goto label_1bfa0c;
    }
    ctx->pc = 0x1BFA04u;
    {
        const bool branch_taken_0x1bfa04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA04u;
        // 0x1bfa08: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa04) {
            ctx->pc = 0x1BFA20u;
            goto label_1bfa20;
        }
    }
    ctx->pc = 0x1BFA0Cu;
label_1bfa0c:
    // 0x1bfa0c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfa10:
    // 0x1bfa10: 0xc06f838  jal         func_1BE0E0
label_1bfa14:
    if (ctx->pc == 0x1BFA14u) {
        ctx->pc = 0x1BFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA10u;
        // 0x1bfa14: 0x24849348  addiu       $a0, $a0, -0x6CB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA18u;
        goto label_1bfa18;
    }
    ctx->pc = 0x1BFA10u;
    SET_GPR_U32(ctx, 31, 0x1BFA18u);
    ctx->pc = 0x1BFA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA10u;
    // 0x1bfa14: 0x24849348  addiu       $a0, $a0, -0x6CB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFA10u, 0x1BFA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA18u;
label_1bfa18:
    // 0x1bfa18: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bfa1c:
    if (ctx->pc == 0x1BFA1Cu) {
        ctx->pc = 0x1BFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA18u;
        // 0x1bfa1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA20u;
        goto label_1bfa20;
    }
    ctx->pc = 0x1BFA18u;
    {
        const bool branch_taken_0x1bfa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA18u;
        // 0x1bfa1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa18) {
            ctx->pc = 0x1BFA4Cu;
            goto label_1bfa4c;
        }
    }
    ctx->pc = 0x1BFA20u;
label_1bfa20:
    // 0x1bfa20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bfa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bfa24:
    // 0x1bfa24: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1bfa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1bfa28:
    // 0x1bfa28: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bfa2c:
    if (ctx->pc == 0x1BFA2Cu) {
        ctx->pc = 0x1BFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA28u;
        // 0x1bfa2c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA30u;
        goto label_1bfa30;
    }
    ctx->pc = 0x1BFA28u;
    {
        const bool branch_taken_0x1bfa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa28) {
            ctx->pc = 0x1BFA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFA28u;
            // 0x1bfa2c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFA40u;
            goto label_1bfa40;
        }
    }
    ctx->pc = 0x1BFA30u;
label_1bfa30:
    // 0x1bfa30: 0x40f809  jalr        $v0
label_1bfa34:
    if (ctx->pc == 0x1BFA34u) {
        ctx->pc = 0x1BFA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA30u;
        // 0x1bfa34: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA38u;
        goto label_1bfa38;
    }
    ctx->pc = 0x1BFA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFA38u);
        ctx->pc = 0x1BFA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA30u;
        // 0x1bfa34: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFA30u, 0x1BFA38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFA38u;
label_1bfa38:
    // 0x1bfa38: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bfa3c:
    if (ctx->pc == 0x1BFA3Cu) {
        ctx->pc = 0x1BFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA38u;
        // 0x1bfa3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA40u;
        goto label_1bfa40;
    }
    ctx->pc = 0x1BFA38u;
    {
        const bool branch_taken_0x1bfa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA38u;
        // 0x1bfa3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa38) {
            ctx->pc = 0x1BFA48u;
            goto label_1bfa48;
        }
    }
    ctx->pc = 0x1BFA40u;
label_1bfa40:
    // 0x1bfa40: 0xc06f838  jal         func_1BE0E0
label_1bfa44:
    if (ctx->pc == 0x1BFA44u) {
        ctx->pc = 0x1BFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA40u;
        // 0x1bfa44: 0x24849368  addiu       $a0, $a0, -0x6C98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA48u;
        goto label_1bfa48;
    }
    ctx->pc = 0x1BFA40u;
    SET_GPR_U32(ctx, 31, 0x1BFA48u);
    ctx->pc = 0x1BFA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA40u;
    // 0x1bfa44: 0x24849368  addiu       $a0, $a0, -0x6C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFA40u, 0x1BFA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA48u;
label_1bfa48:
    // 0x1bfa48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bfa48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa4c:
    // 0x1bfa4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bfa4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bfa50:
    // 0x1bfa50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bfa50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bfa54:
    // 0x1bfa54: 0x3e00008  jr          $ra
label_1bfa58:
    if (ctx->pc == 0x1BFA58u) {
        ctx->pc = 0x1BFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA54u;
        // 0x1bfa58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA5Cu;
        goto label_1bfa5c;
    }
    ctx->pc = 0x1BFA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA54u;
        // 0x1bfa58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFA5Cu;
label_1bfa5c:
    // 0x1bfa5c: 0x0  nop
    ctx->pc = 0x1bfa5cu;
    // NOP
label_1bfa60:
    // 0x1bfa60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bfa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bfa64:
    // 0x1bfa64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bfa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bfa68:
    // 0x1bfa68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bfa68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa6c:
    // 0x1bfa6c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1bfa70:
    if (ctx->pc == 0x1BFA70u) {
        ctx->pc = 0x1BFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA6Cu;
        // 0x1bfa70: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA74u;
        goto label_1bfa74;
    }
    ctx->pc = 0x1BFA6Cu;
    {
        const bool branch_taken_0x1bfa6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA6Cu;
        // 0x1bfa70: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa6c) {
            ctx->pc = 0x1BFA88u;
            goto label_1bfa88;
        }
    }
    ctx->pc = 0x1BFA74u;
label_1bfa74:
    // 0x1bfa74: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfa74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfa78:
    // 0x1bfa78: 0xc06f838  jal         func_1BE0E0
label_1bfa7c:
    if (ctx->pc == 0x1BFA7Cu) {
        ctx->pc = 0x1BFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA78u;
        // 0x1bfa7c: 0x24849388  addiu       $a0, $a0, -0x6C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA80u;
        goto label_1bfa80;
    }
    ctx->pc = 0x1BFA78u;
    SET_GPR_U32(ctx, 31, 0x1BFA80u);
    ctx->pc = 0x1BFA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA78u;
    // 0x1bfa7c: 0x24849388  addiu       $a0, $a0, -0x6C78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFA78u, 0x1BFA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA80u;
label_1bfa80:
    // 0x1bfa80: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bfa84:
    if (ctx->pc == 0x1BFA84u) {
        ctx->pc = 0x1BFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA80u;
        // 0x1bfa84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA88u;
        goto label_1bfa88;
    }
    ctx->pc = 0x1BFA80u;
    {
        const bool branch_taken_0x1bfa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA80u;
        // 0x1bfa84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa80) {
            ctx->pc = 0x1BFAB4u;
            goto label_1bfab4;
        }
    }
    ctx->pc = 0x1BFA88u;
label_1bfa88:
    // 0x1bfa88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bfa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bfa8c:
    // 0x1bfa8c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1bfa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1bfa90:
    // 0x1bfa90: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bfa94:
    if (ctx->pc == 0x1BFA94u) {
        ctx->pc = 0x1BFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA90u;
        // 0x1bfa94: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA98u;
        goto label_1bfa98;
    }
    ctx->pc = 0x1BFA90u;
    {
        const bool branch_taken_0x1bfa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa90) {
            ctx->pc = 0x1BFA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFA90u;
            // 0x1bfa94: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFAA8u;
            goto label_1bfaa8;
        }
    }
    ctx->pc = 0x1BFA98u;
label_1bfa98:
    // 0x1bfa98: 0x40f809  jalr        $v0
label_1bfa9c:
    if (ctx->pc == 0x1BFA9Cu) {
        ctx->pc = 0x1BFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA98u;
        // 0x1bfa9c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAA0u;
        goto label_1bfaa0;
    }
    ctx->pc = 0x1BFA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFAA0u);
        ctx->pc = 0x1BFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA98u;
        // 0x1bfa9c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFA98u, 0x1BFAA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFAA0u;
label_1bfaa0:
    // 0x1bfaa0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bfaa4:
    if (ctx->pc == 0x1BFAA4u) {
        ctx->pc = 0x1BFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAA0u;
        // 0x1bfaa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAA8u;
        goto label_1bfaa8;
    }
    ctx->pc = 0x1BFAA0u;
    {
        const bool branch_taken_0x1bfaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAA0u;
        // 0x1bfaa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfaa0) {
            ctx->pc = 0x1BFAB0u;
            goto label_1bfab0;
        }
    }
    ctx->pc = 0x1BFAA8u;
label_1bfaa8:
    // 0x1bfaa8: 0xc06f838  jal         func_1BE0E0
label_1bfaac:
    if (ctx->pc == 0x1BFAACu) {
        ctx->pc = 0x1BFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAA8u;
        // 0x1bfaac: 0x248493a8  addiu       $a0, $a0, -0x6C58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAB0u;
        goto label_1bfab0;
    }
    ctx->pc = 0x1BFAA8u;
    SET_GPR_U32(ctx, 31, 0x1BFAB0u);
    ctx->pc = 0x1BFAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFAA8u;
    // 0x1bfaac: 0x248493a8  addiu       $a0, $a0, -0x6C58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFAA8u, 0x1BFAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFAB0u;
label_1bfab0:
    // 0x1bfab0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bfab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bfab4:
    // 0x1bfab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bfab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bfab8:
    // 0x1bfab8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bfab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bfabc:
    // 0x1bfabc: 0x3e00008  jr          $ra
label_1bfac0:
    if (ctx->pc == 0x1BFAC0u) {
        ctx->pc = 0x1BFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFABCu;
        // 0x1bfac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAC4u;
        goto label_1bfac4;
    }
    ctx->pc = 0x1BFABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFABCu;
        // 0x1bfac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFAC4u;
label_1bfac4:
    // 0x1bfac4: 0x0  nop
    ctx->pc = 0x1bfac4u;
    // NOP
label_1bfac8:
    // 0x1bfac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bfac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bfacc:
    // 0x1bfacc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bfaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1bfad0:
    // 0x1bfad0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bfad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bfad4:
    // 0x1bfad4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1bfad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1bfad8:
    // 0x1bfad8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1bfadc:
    if (ctx->pc == 0x1BFADCu) {
        ctx->pc = 0x1BFADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAD8u;
        // 0x1bfadc: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAE0u;
        goto label_1bfae0;
    }
    ctx->pc = 0x1BFAD8u;
    {
        const bool branch_taken_0x1bfad8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAD8u;
        // 0x1bfadc: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfad8) {
            ctx->pc = 0x1BFAF0u;
            goto label_1bfaf0;
        }
    }
    ctx->pc = 0x1BFAE0u;
label_1bfae0:
    // 0x1bfae0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfae4:
    // 0x1bfae4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1bfae8:
    if (ctx->pc == 0x1BFAE8u) {
        ctx->pc = 0x1BFAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAE4u;
        // 0x1bfae8: 0x248493c8  addiu       $a0, $a0, -0x6C38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAECu;
        goto label_1bfaec;
    }
    ctx->pc = 0x1BFAE4u;
    {
        const bool branch_taken_0x1bfae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAE4u;
        // 0x1bfae8: 0x248493c8  addiu       $a0, $a0, -0x6C38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfae4) {
            ctx->pc = 0x1BFB2Cu;
            goto label_1bfb2c;
        }
    }
    ctx->pc = 0x1BFAECu;
label_1bfaec:
    // 0x1bfaec: 0x0  nop
    ctx->pc = 0x1bfaecu;
    // NOP
label_1bfaf0:
    // 0x1bfaf0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1bfaf4:
    if (ctx->pc == 0x1BFAF4u) {
        ctx->pc = 0x1BFAF8u;
        goto label_1bfaf8;
    }
    ctx->pc = 0x1BFAF0u;
    {
        const bool branch_taken_0x1bfaf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfaf0) {
            ctx->pc = 0x1BFB08u;
            goto label_1bfb08;
        }
    }
    ctx->pc = 0x1BFAF8u;
label_1bfaf8:
    // 0x1bfaf8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfafc:
    // 0x1bfafc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1bfb00:
    if (ctx->pc == 0x1BFB00u) {
        ctx->pc = 0x1BFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAFCu;
        // 0x1bfb00: 0x248493f0  addiu       $a0, $a0, -0x6C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB04u;
        goto label_1bfb04;
    }
    ctx->pc = 0x1BFAFCu;
    {
        const bool branch_taken_0x1bfafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAFCu;
        // 0x1bfb00: 0x248493f0  addiu       $a0, $a0, -0x6C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfafc) {
            ctx->pc = 0x1BFB2Cu;
            goto label_1bfb2c;
        }
    }
    ctx->pc = 0x1BFB04u;
label_1bfb04:
    // 0x1bfb04: 0x0  nop
    ctx->pc = 0x1bfb04u;
    // NOP
label_1bfb08:
    // 0x1bfb08: 0xc06f8ea  jal         func_1BE3A8
label_1bfb0c:
    if (ctx->pc == 0x1BFB0Cu) {
        ctx->pc = 0x1BFB10u;
        goto label_1bfb10;
    }
    ctx->pc = 0x1BFB08u;
    SET_GPR_U32(ctx, 31, 0x1BFB10u);
    ctx->pc = 0x1BE3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3A8u, 0x1BFB08u, 0x1BFB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB10u;
label_1bfb10:
    // 0x1bfb10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb14:
    // 0x1bfb14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bfb14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb18:
    // 0x1bfb18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bfb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb1c:
    // 0x1bfb1c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_1bfb20:
    if (ctx->pc == 0x1BFB20u) {
        ctx->pc = 0x1BFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB1Cu;
        // 0x1bfb20: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB24u;
        goto label_1bfb24;
    }
    ctx->pc = 0x1BFB1Cu;
    {
        const bool branch_taken_0x1bfb1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB1Cu;
        // 0x1bfb20: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb1c) {
            ctx->pc = 0x1BFB40u;
            goto label_1bfb40;
        }
    }
    ctx->pc = 0x1BFB24u;
label_1bfb24:
    // 0x1bfb24: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfb24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfb28:
    // 0x1bfb28: 0x24849420  addiu       $a0, $a0, -0x6BE0
    ctx->pc = 0x1bfb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939680));
label_1bfb2c:
    // 0x1bfb2c: 0xc06f838  jal         func_1BE0E0
label_1bfb30:
    if (ctx->pc == 0x1BFB30u) {
        ctx->pc = 0x1BFB34u;
        goto label_1bfb34;
    }
    ctx->pc = 0x1BFB2Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB34u);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFB2Cu, 0x1BFB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB34u;
label_1bfb34:
    // 0x1bfb34: 0x1000000e  b           . + 4 + (0xE << 2)
label_1bfb38:
    if (ctx->pc == 0x1BFB38u) {
        ctx->pc = 0x1BFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB34u;
        // 0x1bfb38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB3Cu;
        goto label_1bfb3c;
    }
    ctx->pc = 0x1BFB34u;
    {
        const bool branch_taken_0x1bfb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB34u;
        // 0x1bfb38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb34) {
            ctx->pc = 0x1BFB70u;
            goto label_1bfb70;
        }
    }
    ctx->pc = 0x1BFB3Cu;
label_1bfb3c:
    // 0x1bfb3c: 0x0  nop
    ctx->pc = 0x1bfb3cu;
    // NOP
label_1bfb40:
    // 0x1bfb40: 0xc049cb6  jal         func_1272D8
label_1bfb44:
    if (ctx->pc == 0x1BFB44u) {
        ctx->pc = 0x1BFB48u;
        goto label_1bfb48;
    }
    ctx->pc = 0x1BFB40u;
    SET_GPR_U32(ctx, 31, 0x1BFB48u);
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1BFB40u, 0x1BFB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB48u;
label_1bfb48:
    // 0x1bfb48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bfb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bfb4c:
    // 0x1bfb4c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1bfb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_1bfb50:
    // 0x1bfb50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bfb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb54:
    // 0x1bfb54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bfb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfb58:
    // 0x1bfb58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bfb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb5c:
    // 0x1bfb5c: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1bfb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1bfb60:
    // 0x1bfb60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bfb64:
    if (ctx->pc == 0x1BFB64u) {
        ctx->pc = 0x1BFB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB60u;
        // 0x1bfb64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB68u;
        goto label_1bfb68;
    }
    ctx->pc = 0x1BFB60u;
    {
        const bool branch_taken_0x1bfb60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB60u;
        // 0x1bfb64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb60) {
            ctx->pc = 0x1BFB70u;
            goto label_1bfb70;
        }
    }
    ctx->pc = 0x1BFB68u;
label_1bfb68:
    // 0x1bfb68: 0x60f809  jalr        $v1
label_1bfb6c:
    if (ctx->pc == 0x1BFB6Cu) {
        ctx->pc = 0x1BFB70u;
        goto label_1bfb70;
    }
    ctx->pc = 0x1BFB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BFB70u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFB68u, 0x1BFB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFB70u;
label_1bfb70:
    // 0x1bfb70: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bfb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bfb74:
    // 0x1bfb74: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bfb74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bfb78:
    // 0x1bfb78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bfb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bfb7c:
    // 0x1bfb7c: 0x3e00008  jr          $ra
label_1bfb80:
    if (ctx->pc == 0x1BFB80u) {
        ctx->pc = 0x1BFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB7Cu;
        // 0x1bfb80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB84u;
        goto label_1bfb84;
    }
    ctx->pc = 0x1BFB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB7Cu;
        // 0x1bfb80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFB84u;
label_1bfb84:
    // 0x1bfb84: 0x0  nop
    ctx->pc = 0x1bfb84u;
    // NOP
label_1bfb88:
    // 0x1bfb88: 0x3e00008  jr          $ra
label_1bfb8c:
    if (ctx->pc == 0x1BFB8Cu) {
        ctx->pc = 0x1BFB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB88u;
        // 0x1bfb8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB90u;
        goto label_1bfb90;
    }
    ctx->pc = 0x1BFB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB88u;
        // 0x1bfb8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFB90u;
label_1bfb90:
    // 0x1bfb90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bfb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1bfb94:
    // 0x1bfb94: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1bfb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1bfb98:
    // 0x1bfb98: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1bfb98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb9c:
    // 0x1bfb9c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1bfb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1bfba0:
    // 0x1bfba0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bfba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bfba4:
    // 0x1bfba4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1bfba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1bfba8:
    // 0x1bfba8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1bfba8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1bfbac:
    // 0x1bfbac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bfbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1bfbb0:
    // 0x1bfbb0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1bfbb4:
    if (ctx->pc == 0x1BFBB4u) {
        ctx->pc = 0x1BFBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBB0u;
        // 0x1bfbb4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBB8u;
        goto label_1bfbb8;
    }
    ctx->pc = 0x1BFBB0u;
    {
        const bool branch_taken_0x1bfbb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBB0u;
        // 0x1bfbb4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbb0) {
            ctx->pc = 0x1BFBD0u;
            goto label_1bfbd0;
        }
    }
    ctx->pc = 0x1BFBB8u;
label_1bfbb8:
    // 0x1bfbb8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfbbc:
    // 0x1bfbbc: 0xc06f838  jal         func_1BE0E0
label_1bfbc0:
    if (ctx->pc == 0x1BFBC0u) {
        ctx->pc = 0x1BFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBBCu;
        // 0x1bfbc0: 0x24849448  addiu       $a0, $a0, -0x6BB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBC4u;
        goto label_1bfbc4;
    }
    ctx->pc = 0x1BFBBCu;
    SET_GPR_U32(ctx, 31, 0x1BFBC4u);
    ctx->pc = 0x1BFBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBBCu;
    // 0x1bfbc0: 0x24849448  addiu       $a0, $a0, -0x6BB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFBBCu, 0x1BFBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBC4u;
label_1bfbc4:
    // 0x1bfbc4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1bfbc8:
    if (ctx->pc == 0x1BFBC8u) {
        ctx->pc = 0x1BFBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBC4u;
        // 0x1bfbc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBCCu;
        goto label_1bfbcc;
    }
    ctx->pc = 0x1BFBC4u;
    {
        const bool branch_taken_0x1bfbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBC4u;
        // 0x1bfbc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbc4) {
            ctx->pc = 0x1BFC7Cu;
            goto label_1bfc7c;
        }
    }
    ctx->pc = 0x1BFBCCu;
label_1bfbcc:
    // 0x1bfbcc: 0x0  nop
    ctx->pc = 0x1bfbccu;
    // NOP
label_1bfbd0:
    // 0x1bfbd0: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_1bfbd4:
    if (ctx->pc == 0x1BFBD4u) {
        ctx->pc = 0x1BFBD8u;
        goto label_1bfbd8;
    }
    ctx->pc = 0x1BFBD0u;
    {
        const bool branch_taken_0x1bfbd0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfbd0) {
            ctx->pc = 0x1BFBF0u;
            goto label_1bfbf0;
        }
    }
    ctx->pc = 0x1BFBD8u;
label_1bfbd8:
    // 0x1bfbd8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfbdc:
    // 0x1bfbdc: 0xc06f838  jal         func_1BE0E0
label_1bfbe0:
    if (ctx->pc == 0x1BFBE0u) {
        ctx->pc = 0x1BFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBDCu;
        // 0x1bfbe0: 0x24849470  addiu       $a0, $a0, -0x6B90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBE4u;
        goto label_1bfbe4;
    }
    ctx->pc = 0x1BFBDCu;
    SET_GPR_U32(ctx, 31, 0x1BFBE4u);
    ctx->pc = 0x1BFBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBDCu;
    // 0x1bfbe0: 0x24849470  addiu       $a0, $a0, -0x6B90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFBDCu, 0x1BFBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBE4u;
label_1bfbe4:
    // 0x1bfbe4: 0x10000025  b           . + 4 + (0x25 << 2)
label_1bfbe8:
    if (ctx->pc == 0x1BFBE8u) {
        ctx->pc = 0x1BFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBE4u;
        // 0x1bfbe8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBECu;
        goto label_1bfbec;
    }
    ctx->pc = 0x1BFBE4u;
    {
        const bool branch_taken_0x1bfbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBE4u;
        // 0x1bfbe8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbe4) {
            ctx->pc = 0x1BFC7Cu;
            goto label_1bfc7c;
        }
    }
    ctx->pc = 0x1BFBECu;
label_1bfbec:
    // 0x1bfbec: 0x0  nop
    ctx->pc = 0x1bfbecu;
    // NOP
label_1bfbf0:
    // 0x1bfbf0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_1bfbf4:
    if (ctx->pc == 0x1BFBF4u) {
        ctx->pc = 0x1BFBF8u;
        goto label_1bfbf8;
    }
    ctx->pc = 0x1BFBF0u;
    {
        const bool branch_taken_0x1bfbf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfbf0) {
            ctx->pc = 0x1BFC10u;
            goto label_1bfc10;
        }
    }
    ctx->pc = 0x1BFBF8u;
label_1bfbf8:
    // 0x1bfbf8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfbfc:
    // 0x1bfbfc: 0xc06f838  jal         func_1BE0E0
label_1bfc00:
    if (ctx->pc == 0x1BFC00u) {
        ctx->pc = 0x1BFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBFCu;
        // 0x1bfc00: 0x24849498  addiu       $a0, $a0, -0x6B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC04u;
        goto label_1bfc04;
    }
    ctx->pc = 0x1BFBFCu;
    SET_GPR_U32(ctx, 31, 0x1BFC04u);
    ctx->pc = 0x1BFC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBFCu;
    // 0x1bfc00: 0x24849498  addiu       $a0, $a0, -0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFBFCu, 0x1BFC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC04u;
label_1bfc04:
    // 0x1bfc04: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1bfc08:
    if (ctx->pc == 0x1BFC08u) {
        ctx->pc = 0x1BFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC04u;
        // 0x1bfc08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC0Cu;
        goto label_1bfc0c;
    }
    ctx->pc = 0x1BFC04u;
    {
        const bool branch_taken_0x1bfc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC04u;
        // 0x1bfc08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc04) {
            ctx->pc = 0x1BFC7Cu;
            goto label_1bfc7c;
        }
    }
    ctx->pc = 0x1BFC0Cu;
label_1bfc0c:
    // 0x1bfc0c: 0x0  nop
    ctx->pc = 0x1bfc0cu;
    // NOP
label_1bfc10:
    // 0x1bfc10: 0xc06f8ea  jal         func_1BE3A8
label_1bfc14:
    if (ctx->pc == 0x1BFC14u) {
        ctx->pc = 0x1BFC18u;
        goto label_1bfc18;
    }
    ctx->pc = 0x1BFC10u;
    SET_GPR_U32(ctx, 31, 0x1BFC18u);
    ctx->pc = 0x1BE3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3A8u, 0x1BFC10u, 0x1BFC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC18u;
label_1bfc18:
    // 0x1bfc18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bfc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bfc1c:
    // 0x1bfc1c: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_1bfc20:
    if (ctx->pc == 0x1BFC20u) {
        ctx->pc = 0x1BFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC1Cu;
        // 0x1bfc20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC24u;
        goto label_1bfc24;
    }
    ctx->pc = 0x1BFC1Cu;
    {
        const bool branch_taken_0x1bfc1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc1c) {
            ctx->pc = 0x1BFC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFC1Cu;
            // 0x1bfc20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFC38u;
            goto label_1bfc38;
        }
    }
    ctx->pc = 0x1BFC24u;
label_1bfc24:
    // 0x1bfc24: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfc28:
    // 0x1bfc28: 0xc06f838  jal         func_1BE0E0
label_1bfc2c:
    if (ctx->pc == 0x1BFC2Cu) {
        ctx->pc = 0x1BFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC28u;
        // 0x1bfc2c: 0x248494c0  addiu       $a0, $a0, -0x6B40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC30u;
        goto label_1bfc30;
    }
    ctx->pc = 0x1BFC28u;
    SET_GPR_U32(ctx, 31, 0x1BFC30u);
    ctx->pc = 0x1BFC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC28u;
    // 0x1bfc2c: 0x248494c0  addiu       $a0, $a0, -0x6B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFC28u, 0x1BFC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC30u;
label_1bfc30:
    // 0x1bfc30: 0x10000012  b           . + 4 + (0x12 << 2)
label_1bfc34:
    if (ctx->pc == 0x1BFC34u) {
        ctx->pc = 0x1BFC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC30u;
        // 0x1bfc34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC38u;
        goto label_1bfc38;
    }
    ctx->pc = 0x1BFC30u;
    {
        const bool branch_taken_0x1bfc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC30u;
        // 0x1bfc34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc30) {
            ctx->pc = 0x1BFC7Cu;
            goto label_1bfc7c;
        }
    }
    ctx->pc = 0x1BFC38u;
label_1bfc38:
    // 0x1bfc38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfc3c:
    // 0x1bfc3c: 0xc049cb6  jal         func_1272D8
label_1bfc40:
    if (ctx->pc == 0x1BFC40u) {
        ctx->pc = 0x1BFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC3Cu;
        // 0x1bfc40: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC44u;
        goto label_1bfc44;
    }
    ctx->pc = 0x1BFC3Cu;
    SET_GPR_U32(ctx, 31, 0x1BFC44u);
    ctx->pc = 0x1BFC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC3Cu;
    // 0x1bfc40: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1BFC3Cu, 0x1BFC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC44u;
label_1bfc44:
    // 0x1bfc44: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1bfc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1bfc48:
    // 0x1bfc48: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x1bfc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_1bfc4c:
    // 0x1bfc4c: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x1bfc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
label_1bfc50:
    // 0x1bfc50: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1bfc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1bfc54:
    // 0x1bfc54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1bfc58:
    if (ctx->pc == 0x1BFC58u) {
        ctx->pc = 0x1BFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC54u;
        // 0x1bfc58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC5Cu;
        goto label_1bfc5c;
    }
    ctx->pc = 0x1BFC54u;
    {
        const bool branch_taken_0x1bfc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC54u;
        // 0x1bfc58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc54) {
            ctx->pc = 0x1BFC78u;
            goto label_1bfc78;
        }
    }
    ctx->pc = 0x1BFC5Cu;
label_1bfc5c:
    // 0x1bfc5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bfc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bfc60:
    // 0x1bfc60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bfc60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfc64:
    // 0x1bfc64: 0x40f809  jalr        $v0
label_1bfc68:
    if (ctx->pc == 0x1BFC68u) {
        ctx->pc = 0x1BFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC64u;
        // 0x1bfc68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC6Cu;
        goto label_1bfc6c;
    }
    ctx->pc = 0x1BFC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFC6Cu);
        ctx->pc = 0x1BFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC64u;
        // 0x1bfc68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFC64u, 0x1BFC6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFC6Cu;
label_1bfc6c:
    // 0x1bfc6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bfc70:
    if (ctx->pc == 0x1BFC70u) {
        ctx->pc = 0x1BFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC6Cu;
        // 0x1bfc70: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC74u;
        goto label_1bfc74;
    }
    ctx->pc = 0x1BFC6Cu;
    {
        const bool branch_taken_0x1bfc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC6Cu;
        // 0x1bfc70: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc6c) {
            ctx->pc = 0x1BFC80u;
            goto label_1bfc80;
        }
    }
    ctx->pc = 0x1BFC74u;
label_1bfc74:
    // 0x1bfc74: 0x0  nop
    ctx->pc = 0x1bfc74u;
    // NOP
label_1bfc78:
    // 0x1bfc78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bfc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bfc7c:
    // 0x1bfc7c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bfc7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bfc80:
    // 0x1bfc80: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bfc80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bfc84:
    // 0x1bfc84: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bfc84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bfc88:
    // 0x1bfc88: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1bfc88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1bfc8c:
    // 0x1bfc8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bfc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bfc90:
    // 0x1bfc90: 0x3e00008  jr          $ra
label_1bfc94:
    if (ctx->pc == 0x1BFC94u) {
        ctx->pc = 0x1BFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC90u;
        // 0x1bfc94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC98u;
        goto label_1bfc98;
    }
    ctx->pc = 0x1BFC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC90u;
        // 0x1bfc94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFC98u;
label_1bfc98:
    // 0x1bfc98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bfc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bfc9c:
    // 0x1bfc9c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bfc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1bfca0:
    // 0x1bfca0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bfca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bfca4:
    // 0x1bfca4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1bfca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1bfca8:
    // 0x1bfca8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1bfcac:
    if (ctx->pc == 0x1BFCACu) {
        ctx->pc = 0x1BFCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCA8u;
        // 0x1bfcac: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFCB0u;
        goto label_1bfcb0;
    }
    ctx->pc = 0x1BFCA8u;
    {
        const bool branch_taken_0x1bfca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCA8u;
        // 0x1bfcac: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfca8) {
            ctx->pc = 0x1BFCC0u;
            goto label_1bfcc0;
        }
    }
    ctx->pc = 0x1BFCB0u;
label_1bfcb0:
    // 0x1bfcb0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfcb4:
    // 0x1bfcb4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1bfcb8:
    if (ctx->pc == 0x1BFCB8u) {
        ctx->pc = 0x1BFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCB4u;
        // 0x1bfcb8: 0x248494e8  addiu       $a0, $a0, -0x6B18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFCBCu;
        goto label_1bfcbc;
    }
    ctx->pc = 0x1BFCB4u;
    {
        const bool branch_taken_0x1bfcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCB4u;
        // 0x1bfcb8: 0x248494e8  addiu       $a0, $a0, -0x6B18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfcb4) {
            ctx->pc = 0x1BFCFCu;
            goto label_1bfcfc;
        }
    }
    ctx->pc = 0x1BFCBCu;
label_1bfcbc:
    // 0x1bfcbc: 0x0  nop
    ctx->pc = 0x1bfcbcu;
    // NOP
label_1bfcc0:
    // 0x1bfcc0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1bfcc4:
    if (ctx->pc == 0x1BFCC4u) {
        ctx->pc = 0x1BFCC8u;
        goto label_1bfcc8;
    }
    ctx->pc = 0x1BFCC0u;
    {
        const bool branch_taken_0x1bfcc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfcc0) {
            ctx->pc = 0x1BFCD8u;
            goto label_1bfcd8;
        }
    }
    ctx->pc = 0x1BFCC8u;
label_1bfcc8:
    // 0x1bfcc8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfccc:
    // 0x1bfccc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1bfcd0:
    if (ctx->pc == 0x1BFCD0u) {
        ctx->pc = 0x1BFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCCCu;
        // 0x1bfcd0: 0x24849510  addiu       $a0, $a0, -0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFCD4u;
        goto label_1bfcd4;
    }
    ctx->pc = 0x1BFCCCu;
    {
        const bool branch_taken_0x1bfccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCCCu;
        // 0x1bfcd0: 0x24849510  addiu       $a0, $a0, -0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfccc) {
            ctx->pc = 0x1BFCFCu;
            goto label_1bfcfc;
        }
    }
    ctx->pc = 0x1BFCD4u;
label_1bfcd4:
    // 0x1bfcd4: 0x0  nop
    ctx->pc = 0x1bfcd4u;
    // NOP
label_1bfcd8:
    // 0x1bfcd8: 0xc06f8ea  jal         func_1BE3A8
label_1bfcdc:
    if (ctx->pc == 0x1BFCDCu) {
        ctx->pc = 0x1BFCE0u;
        goto label_1bfce0;
    }
    ctx->pc = 0x1BFCD8u;
    SET_GPR_U32(ctx, 31, 0x1BFCE0u);
    ctx->pc = 0x1BE3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3A8u, 0x1BFCD8u, 0x1BFCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFCE0u;
label_1bfce0:
    // 0x1bfce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfce4:
    // 0x1bfce4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bfce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bfce8:
    // 0x1bfce8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bfce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bfcec:
    // 0x1bfcec: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_1bfcf0:
    if (ctx->pc == 0x1BFCF0u) {
        ctx->pc = 0x1BFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCECu;
        // 0x1bfcf0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFCF4u;
        goto label_1bfcf4;
    }
    ctx->pc = 0x1BFCECu;
    {
        const bool branch_taken_0x1bfcec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCECu;
        // 0x1bfcf0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfcec) {
            ctx->pc = 0x1BFD10u;
            goto label_1bfd10;
        }
    }
    ctx->pc = 0x1BFCF4u;
label_1bfcf4:
    // 0x1bfcf4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfcf8:
    // 0x1bfcf8: 0x24849538  addiu       $a0, $a0, -0x6AC8
    ctx->pc = 0x1bfcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939960));
label_1bfcfc:
    // 0x1bfcfc: 0xc06f838  jal         func_1BE0E0
label_1bfd00:
    if (ctx->pc == 0x1BFD00u) {
        ctx->pc = 0x1BFD04u;
        goto label_1bfd04;
    }
    ctx->pc = 0x1BFCFCu;
    SET_GPR_U32(ctx, 31, 0x1BFD04u);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFCFCu, 0x1BFD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD04u;
label_1bfd04:
    // 0x1bfd04: 0x1000000e  b           . + 4 + (0xE << 2)
label_1bfd08:
    if (ctx->pc == 0x1BFD08u) {
        ctx->pc = 0x1BFD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD04u;
        // 0x1bfd08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD0Cu;
        goto label_1bfd0c;
    }
    ctx->pc = 0x1BFD04u;
    {
        const bool branch_taken_0x1bfd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD04u;
        // 0x1bfd08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd04) {
            ctx->pc = 0x1BFD40u;
            goto label_1bfd40;
        }
    }
    ctx->pc = 0x1BFD0Cu;
label_1bfd0c:
    // 0x1bfd0c: 0x0  nop
    ctx->pc = 0x1bfd0cu;
    // NOP
label_1bfd10:
    // 0x1bfd10: 0xc049cb6  jal         func_1272D8
label_1bfd14:
    if (ctx->pc == 0x1BFD14u) {
        ctx->pc = 0x1BFD18u;
        goto label_1bfd18;
    }
    ctx->pc = 0x1BFD10u;
    SET_GPR_U32(ctx, 31, 0x1BFD18u);
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1BFD10u, 0x1BFD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD18u;
label_1bfd18:
    // 0x1bfd18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bfd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bfd1c:
    // 0x1bfd1c: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1bfd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_1bfd20:
    // 0x1bfd20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bfd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bfd24:
    // 0x1bfd24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bfd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bfd28:
    // 0x1bfd28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bfd28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfd2c:
    // 0x1bfd2c: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1bfd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1bfd30:
    // 0x1bfd30: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bfd34:
    if (ctx->pc == 0x1BFD34u) {
        ctx->pc = 0x1BFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD30u;
        // 0x1bfd34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD38u;
        goto label_1bfd38;
    }
    ctx->pc = 0x1BFD30u;
    {
        const bool branch_taken_0x1bfd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD30u;
        // 0x1bfd34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd30) {
            ctx->pc = 0x1BFD40u;
            goto label_1bfd40;
        }
    }
    ctx->pc = 0x1BFD38u;
label_1bfd38:
    // 0x1bfd38: 0x60f809  jalr        $v1
label_1bfd3c:
    if (ctx->pc == 0x1BFD3Cu) {
        ctx->pc = 0x1BFD40u;
        goto label_1bfd40;
    }
    ctx->pc = 0x1BFD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BFD40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFD38u, 0x1BFD40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFD40u;
label_1bfd40:
    // 0x1bfd40: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bfd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bfd44:
    // 0x1bfd44: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bfd44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bfd48:
    // 0x1bfd48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bfd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bfd4c:
    // 0x1bfd4c: 0x3e00008  jr          $ra
label_1bfd50:
    if (ctx->pc == 0x1BFD50u) {
        ctx->pc = 0x1BFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD4Cu;
        // 0x1bfd50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD54u;
        goto label_1bfd54;
    }
    ctx->pc = 0x1BFD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD4Cu;
        // 0x1bfd50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFD54u;
label_1bfd54:
    // 0x1bfd54: 0x0  nop
    ctx->pc = 0x1bfd54u;
    // NOP
label_1bfd58:
    // 0x1bfd58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bfd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bfd5c:
    // 0x1bfd5c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bfd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1bfd60:
    // 0x1bfd60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bfd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bfd64:
    // 0x1bfd64: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1bfd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1bfd68:
    // 0x1bfd68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bfd68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bfd6c:
    // 0x1bfd6c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1bfd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1bfd70:
    // 0x1bfd70: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1bfd74:
    if (ctx->pc == 0x1BFD74u) {
        ctx->pc = 0x1BFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD70u;
        // 0x1bfd74: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD78u;
        goto label_1bfd78;
    }
    ctx->pc = 0x1BFD70u;
    {
        const bool branch_taken_0x1bfd70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD70u;
        // 0x1bfd74: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd70) {
            ctx->pc = 0x1BFD88u;
            goto label_1bfd88;
        }
    }
    ctx->pc = 0x1BFD78u;
label_1bfd78:
    // 0x1bfd78: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfd78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfd7c:
    // 0x1bfd7c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1bfd80:
    if (ctx->pc == 0x1BFD80u) {
        ctx->pc = 0x1BFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD7Cu;
        // 0x1bfd80: 0x24849560  addiu       $a0, $a0, -0x6AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD84u;
        goto label_1bfd84;
    }
    ctx->pc = 0x1BFD7Cu;
    {
        const bool branch_taken_0x1bfd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD7Cu;
        // 0x1bfd80: 0x24849560  addiu       $a0, $a0, -0x6AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd7c) {
            ctx->pc = 0x1BFDC4u;
            goto label_1bfdc4;
        }
    }
    ctx->pc = 0x1BFD84u;
label_1bfd84:
    // 0x1bfd84: 0x0  nop
    ctx->pc = 0x1bfd84u;
    // NOP
label_1bfd88:
    // 0x1bfd88: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1bfd8c:
    if (ctx->pc == 0x1BFD8Cu) {
        ctx->pc = 0x1BFD90u;
        goto label_1bfd90;
    }
    ctx->pc = 0x1BFD88u;
    {
        const bool branch_taken_0x1bfd88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd88) {
            ctx->pc = 0x1BFDA0u;
            goto label_1bfda0;
        }
    }
    ctx->pc = 0x1BFD90u;
label_1bfd90:
    // 0x1bfd90: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfd94:
    // 0x1bfd94: 0x1000000b  b           . + 4 + (0xB << 2)
label_1bfd98:
    if (ctx->pc == 0x1BFD98u) {
        ctx->pc = 0x1BFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD94u;
        // 0x1bfd98: 0x24849590  addiu       $a0, $a0, -0x6A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD9Cu;
        goto label_1bfd9c;
    }
    ctx->pc = 0x1BFD94u;
    {
        const bool branch_taken_0x1bfd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD94u;
        // 0x1bfd98: 0x24849590  addiu       $a0, $a0, -0x6A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd94) {
            ctx->pc = 0x1BFDC4u;
            goto label_1bfdc4;
        }
    }
    ctx->pc = 0x1BFD9Cu;
label_1bfd9c:
    // 0x1bfd9c: 0x0  nop
    ctx->pc = 0x1bfd9cu;
    // NOP
label_1bfda0:
    // 0x1bfda0: 0xc06f8ea  jal         func_1BE3A8
label_1bfda4:
    if (ctx->pc == 0x1BFDA4u) {
        ctx->pc = 0x1BFDA8u;
        goto label_1bfda8;
    }
    ctx->pc = 0x1BFDA0u;
    SET_GPR_U32(ctx, 31, 0x1BFDA8u);
    ctx->pc = 0x1BE3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3A8u, 0x1BFDA0u, 0x1BFDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDA8u;
label_1bfda8:
    // 0x1bfda8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfdac:
    // 0x1bfdac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bfdacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bfdb0:
    // 0x1bfdb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bfdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bfdb4:
    // 0x1bfdb4: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_1bfdb8:
    if (ctx->pc == 0x1BFDB8u) {
        ctx->pc = 0x1BFDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDB4u;
        // 0x1bfdb8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFDBCu;
        goto label_1bfdbc;
    }
    ctx->pc = 0x1BFDB4u;
    {
        const bool branch_taken_0x1bfdb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDB4u;
        // 0x1bfdb8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfdb4) {
            ctx->pc = 0x1BFDD8u;
            goto label_1bfdd8;
        }
    }
    ctx->pc = 0x1BFDBCu;
label_1bfdbc:
    // 0x1bfdbc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfdc0:
    // 0x1bfdc0: 0x248495c0  addiu       $a0, $a0, -0x6A40
    ctx->pc = 0x1bfdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940096));
label_1bfdc4:
    // 0x1bfdc4: 0xc06f838  jal         func_1BE0E0
label_1bfdc8:
    if (ctx->pc == 0x1BFDC8u) {
        ctx->pc = 0x1BFDCCu;
        goto label_1bfdcc;
    }
    ctx->pc = 0x1BFDC4u;
    SET_GPR_U32(ctx, 31, 0x1BFDCCu);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFDC4u, 0x1BFDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDCCu;
label_1bfdcc:
    // 0x1bfdcc: 0x1000000f  b           . + 4 + (0xF << 2)
label_1bfdd0:
    if (ctx->pc == 0x1BFDD0u) {
        ctx->pc = 0x1BFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDCCu;
        // 0x1bfdd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFDD4u;
        goto label_1bfdd4;
    }
    ctx->pc = 0x1BFDCCu;
    {
        const bool branch_taken_0x1bfdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDCCu;
        // 0x1bfdd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfdcc) {
            ctx->pc = 0x1BFE0Cu;
            goto label_1bfe0c;
        }
    }
    ctx->pc = 0x1BFDD4u;
label_1bfdd4:
    // 0x1bfdd4: 0x0  nop
    ctx->pc = 0x1bfdd4u;
    // NOP
label_1bfdd8:
    // 0x1bfdd8: 0xc049cb6  jal         func_1272D8
label_1bfddc:
    if (ctx->pc == 0x1BFDDCu) {
        ctx->pc = 0x1BFDE0u;
        goto label_1bfde0;
    }
    ctx->pc = 0x1BFDD8u;
    SET_GPR_U32(ctx, 31, 0x1BFDE0u);
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1BFDD8u, 0x1BFDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDE0u;
label_1bfde0:
    // 0x1bfde0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bfde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bfde4:
    // 0x1bfde4: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1bfde4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_1bfde8:
    // 0x1bfde8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bfde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bfdec:
    // 0x1bfdec: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x1bfdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_1bfdf0:
    // 0x1bfdf0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bfdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bfdf4:
    // 0x1bfdf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bfdf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfdf8:
    // 0x1bfdf8: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1bfdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1bfdfc:
    // 0x1bfdfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bfe00:
    if (ctx->pc == 0x1BFE00u) {
        ctx->pc = 0x1BFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDFCu;
        // 0x1bfe00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE04u;
        goto label_1bfe04;
    }
    ctx->pc = 0x1BFDFCu;
    {
        const bool branch_taken_0x1bfdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDFCu;
        // 0x1bfe00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfdfc) {
            ctx->pc = 0x1BFE0Cu;
            goto label_1bfe0c;
        }
    }
    ctx->pc = 0x1BFE04u;
label_1bfe04:
    // 0x1bfe04: 0x60f809  jalr        $v1
label_1bfe08:
    if (ctx->pc == 0x1BFE08u) {
        ctx->pc = 0x1BFE0Cu;
        goto label_1bfe0c;
    }
    ctx->pc = 0x1BFE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BFE0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFE04u, 0x1BFE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFE0Cu;
label_1bfe0c:
    // 0x1bfe0c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bfe0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bfe10:
    // 0x1bfe10: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bfe10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bfe14:
    // 0x1bfe14: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bfe14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bfe18:
    // 0x1bfe18: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1bfe18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1bfe1c:
    // 0x1bfe1c: 0x3e00008  jr          $ra
label_1bfe20:
    if (ctx->pc == 0x1BFE20u) {
        ctx->pc = 0x1BFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE1Cu;
        // 0x1bfe20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE24u;
        goto label_1bfe24;
    }
    ctx->pc = 0x1BFE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE1Cu;
        // 0x1bfe20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFE24u;
label_1bfe24:
    // 0x1bfe24: 0x0  nop
    ctx->pc = 0x1bfe24u;
    // NOP
label_1bfe28:
    // 0x1bfe28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bfe28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bfe2c:
    // 0x1bfe2c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bfe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1bfe30:
    // 0x1bfe30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bfe30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bfe34:
    // 0x1bfe34: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1bfe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1bfe38:
    // 0x1bfe38: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1bfe3c:
    if (ctx->pc == 0x1BFE3Cu) {
        ctx->pc = 0x1BFE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE38u;
        // 0x1bfe3c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE40u;
        goto label_1bfe40;
    }
    ctx->pc = 0x1BFE38u;
    {
        const bool branch_taken_0x1bfe38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE38u;
        // 0x1bfe3c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe38) {
            ctx->pc = 0x1BFE58u;
            goto label_1bfe58;
        }
    }
    ctx->pc = 0x1BFE40u;
label_1bfe40:
    // 0x1bfe40: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfe40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfe44:
    // 0x1bfe44: 0xc06f838  jal         func_1BE0E0
label_1bfe48:
    if (ctx->pc == 0x1BFE48u) {
        ctx->pc = 0x1BFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE44u;
        // 0x1bfe48: 0x248495e8  addiu       $a0, $a0, -0x6A18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE4Cu;
        goto label_1bfe4c;
    }
    ctx->pc = 0x1BFE44u;
    SET_GPR_U32(ctx, 31, 0x1BFE4Cu);
    ctx->pc = 0x1BFE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE44u;
    // 0x1bfe48: 0x248495e8  addiu       $a0, $a0, -0x6A18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFE44u, 0x1BFE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE4Cu;
label_1bfe4c:
    // 0x1bfe4c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1bfe50:
    if (ctx->pc == 0x1BFE50u) {
        ctx->pc = 0x1BFE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE4Cu;
        // 0x1bfe50: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE54u;
        goto label_1bfe54;
    }
    ctx->pc = 0x1BFE4Cu;
    {
        const bool branch_taken_0x1bfe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE4Cu;
        // 0x1bfe50: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe4c) {
            ctx->pc = 0x1BFED8u;
            goto label_1bfed8;
        }
    }
    ctx->pc = 0x1BFE54u;
label_1bfe54:
    // 0x1bfe54: 0x0  nop
    ctx->pc = 0x1bfe54u;
    // NOP
label_1bfe58:
    // 0x1bfe58: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_1bfe5c:
    if (ctx->pc == 0x1BFE5Cu) {
        ctx->pc = 0x1BFE60u;
        goto label_1bfe60;
    }
    ctx->pc = 0x1BFE58u;
    {
        const bool branch_taken_0x1bfe58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe58) {
            ctx->pc = 0x1BFE78u;
            goto label_1bfe78;
        }
    }
    ctx->pc = 0x1BFE60u;
label_1bfe60:
    // 0x1bfe60: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfe60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfe64:
    // 0x1bfe64: 0xc06f838  jal         func_1BE0E0
label_1bfe68:
    if (ctx->pc == 0x1BFE68u) {
        ctx->pc = 0x1BFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE64u;
        // 0x1bfe68: 0x24849610  addiu       $a0, $a0, -0x69F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE6Cu;
        goto label_1bfe6c;
    }
    ctx->pc = 0x1BFE64u;
    SET_GPR_U32(ctx, 31, 0x1BFE6Cu);
    ctx->pc = 0x1BFE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE64u;
    // 0x1bfe68: 0x24849610  addiu       $a0, $a0, -0x69F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFE64u, 0x1BFE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE6Cu;
label_1bfe6c:
    // 0x1bfe6c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1bfe70:
    if (ctx->pc == 0x1BFE70u) {
        ctx->pc = 0x1BFE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE6Cu;
        // 0x1bfe70: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE74u;
        goto label_1bfe74;
    }
    ctx->pc = 0x1BFE6Cu;
    {
        const bool branch_taken_0x1bfe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE6Cu;
        // 0x1bfe70: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe6c) {
            ctx->pc = 0x1BFED8u;
            goto label_1bfed8;
        }
    }
    ctx->pc = 0x1BFE74u;
label_1bfe74:
    // 0x1bfe74: 0x0  nop
    ctx->pc = 0x1bfe74u;
    // NOP
label_1bfe78:
    // 0x1bfe78: 0xc06f8ea  jal         func_1BE3A8
label_1bfe7c:
    if (ctx->pc == 0x1BFE7Cu) {
        ctx->pc = 0x1BFE80u;
        goto label_1bfe80;
    }
    ctx->pc = 0x1BFE78u;
    SET_GPR_U32(ctx, 31, 0x1BFE80u);
    ctx->pc = 0x1BE3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3A8u, 0x1BFE78u, 0x1BFE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE80u;
label_1bfe80:
    // 0x1bfe80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfe80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfe84:
    // 0x1bfe84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bfe84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bfe88:
    // 0x1bfe88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bfe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bfe8c:
    // 0x1bfe8c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_1bfe90:
    if (ctx->pc == 0x1BFE90u) {
        ctx->pc = 0x1BFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE8Cu;
        // 0x1bfe90: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE94u;
        goto label_1bfe94;
    }
    ctx->pc = 0x1BFE8Cu;
    {
        const bool branch_taken_0x1bfe8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE8Cu;
        // 0x1bfe90: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe8c) {
            ctx->pc = 0x1BFEA8u;
            goto label_1bfea8;
        }
    }
    ctx->pc = 0x1BFE94u;
label_1bfe94:
    // 0x1bfe94: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bfe94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bfe98:
    // 0x1bfe98: 0xc06f838  jal         func_1BE0E0
label_1bfe9c:
    if (ctx->pc == 0x1BFE9Cu) {
        ctx->pc = 0x1BFE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE98u;
        // 0x1bfe9c: 0x24849638  addiu       $a0, $a0, -0x69C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFEA0u;
        goto label_1bfea0;
    }
    ctx->pc = 0x1BFE98u;
    SET_GPR_U32(ctx, 31, 0x1BFEA0u);
    ctx->pc = 0x1BFE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE98u;
    // 0x1bfe9c: 0x24849638  addiu       $a0, $a0, -0x69C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BFE98u, 0x1BFEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFEA0u;
label_1bfea0:
    // 0x1bfea0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1bfea4:
    if (ctx->pc == 0x1BFEA4u) {
        ctx->pc = 0x1BFEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEA0u;
        // 0x1bfea4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFEA8u;
        goto label_1bfea8;
    }
    ctx->pc = 0x1BFEA0u;
    {
        const bool branch_taken_0x1bfea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEA0u;
        // 0x1bfea4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfea0) {
            ctx->pc = 0x1BFED8u;
            goto label_1bfed8;
        }
    }
    ctx->pc = 0x1BFEA8u;
label_1bfea8:
    // 0x1bfea8: 0xc049cb6  jal         func_1272D8
label_1bfeac:
    if (ctx->pc == 0x1BFEACu) {
        ctx->pc = 0x1BFEB0u;
        goto label_1bfeb0;
    }
    ctx->pc = 0x1BFEA8u;
    SET_GPR_U32(ctx, 31, 0x1BFEB0u);
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1BFEA8u, 0x1BFEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFEB0u;
label_1bfeb0:
    // 0x1bfeb0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1bfeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1bfeb4:
    // 0x1bfeb4: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1bfeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_1bfeb8:
    // 0x1bfeb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bfeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bfebc:
    // 0x1bfebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bfebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfec0:
    // 0x1bfec0: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1bfec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1bfec4:
    // 0x1bfec4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1bfec8:
    if (ctx->pc == 0x1BFEC8u) {
        ctx->pc = 0x1BFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEC4u;
        // 0x1bfec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFECCu;
        goto label_1bfecc;
    }
    ctx->pc = 0x1BFEC4u;
    {
        const bool branch_taken_0x1bfec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEC4u;
        // 0x1bfec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfec4) {
            ctx->pc = 0x1BFED4u;
            goto label_1bfed4;
        }
    }
    ctx->pc = 0x1BFECCu;
label_1bfecc:
    // 0x1bfecc: 0x40f809  jalr        $v0
label_1bfed0:
    if (ctx->pc == 0x1BFED0u) {
        ctx->pc = 0x1BFED4u;
        goto label_1bfed4;
    }
    ctx->pc = 0x1BFECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFED4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFECCu, 0x1BFED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFED4u;
label_1bfed4:
    // 0x1bfed4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bfed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bfed8:
    // 0x1bfed8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bfed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bfedc:
    // 0x1bfedc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bfedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bfee0:
    // 0x1bfee0: 0x3e00008  jr          $ra
label_1bfee4:
    if (ctx->pc == 0x1BFEE4u) {
        ctx->pc = 0x1BFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEE0u;
        // 0x1bfee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFEE8u;
        goto label_fallthrough_0x1bfee0;
    }
    ctx->pc = 0x1BFEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEE0u;
        // 0x1bfee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bfee0:
    ctx->pc = 0x1BFEE8u;
}
